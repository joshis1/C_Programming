    /***************************************************************
    *  Copyright SJ 2013
    *
    *  Module Name: gif_lzw
    *
    ***************************************************************/

    /**Here the LZW decompression algorithm is implemented **/

    #include"sysm.h"
    #include"gif_lzw.h"
    #include"gif_read.h"


    /** Local Variables to uncompress the LZW compression **/

    static long CodeBitOffset;
    static unsigned int CodeMask;
    static unsigned int index_local=0;
    static unsigned int CODE_SIZE;
    static StringTable *Dictionary=NULL;
    static int *SuffixStack=NULL;
    static Byte* PackBytes=NULL;
    static int SuffixStackIndex=0;


    /** Local Helper Functions **/
    static char *myitoa(int i, char *s);
    static void Output_Code(unsigned int DictIndex,unsigned int LZW_ENDCODE);
    static unsigned int ReadCode(Read_Data first_code);
    static void InitializeDictionary(unsigned int LZW_ENDCODE,StringTable *Dictionary);


    /** This is the main function to uncompress the LZW compression : invoked by Gif_read**/


    Byte* Lzw_Decode(Read_Data RawData,ImageDesc_Info Image_Desc)
    {
        unsigned int code=0;
        unsigned int OldCode=0;
        unsigned int LZW_ClearCode=0;
        unsigned int LZW_ENDCODE=0;
        unsigned int END_StringTable=0;

        index_local = 0;

        #ifdef DEBUG
        printf("LZW_DECODE CALLED\r\n");
        #endif

        /***************PackBytes used for output******************/
        PackBytes=(Byte*)create_memory(Image_Desc.ImageHeight*Image_Desc.ImageWidth*3);
        memset(PackBytes,0,Image_Desc.ImageHeight*Image_Desc.ImageWidth*3);
        Dictionary=(StringTable *)create_memory(sizeof(StringTable)*4096);
        memset(Dictionary,0,sizeof(StringTable)*4096);

        LZW_ClearCode = 1<<RawData.LZW_CODESIZE;
        LZW_ENDCODE = LZW_ClearCode+1;
        END_StringTable = LZW_ENDCODE;
        END_StringTable++;
        CODE_SIZE = RawData.LZW_CODESIZE+1;
        CodeMask = (1<<CODE_SIZE)-1;
        CodeBitOffset = 0;
        InitializeDictionary(LZW_ENDCODE,Dictionary);
        code = ReadCode(RawData);

        if(code != LZW_ClearCode)
          {
            perror("Invalid Data");
          }

        OldCode = code = ReadCode(RawData);
        PackBytes[index_local] = (Byte)code;

        index_local++;

        do
        {
            code=ReadCode(RawData);

            if(code == LZW_ENDCODE)
                break;
            if(code == LZW_ClearCode)
            {
                CODE_SIZE = RawData.LZW_CODESIZE+1;
                CodeMask = (1<<CODE_SIZE)-1;
                memset(Dictionary,0,sizeof(StringTable)*4096);
                InitializeDictionary(LZW_ENDCODE,Dictionary);
                END_StringTable=LZW_ENDCODE;
                END_StringTable++;
                OldCode=code=ReadCode(RawData);
                PackBytes[index_local]=(Byte)code;
                index_local++;
            }
            else
            {
                if(code < END_StringTable)
                {
                    (Dictionary+END_StringTable)->Index = END_StringTable;
                    (Dictionary+END_StringTable)->Prefix = OldCode;
                    strcpy((Dictionary+END_StringTable)->SuffixByte,(Dictionary+code)->FirstByte);
                    strcpy((Dictionary+END_StringTable)->FirstByte,(Dictionary+OldCode)->FirstByte);
                    END_StringTable++;
                    Output_Code(code,LZW_ENDCODE);
                    while(SuffixStackIndex>0)
                    {
                        SuffixStackIndex--;
                        PackBytes[index_local++] = SuffixStack[SuffixStackIndex];

                    }
                    SuffixStackIndex = 0;
                }
                else
                {
                    (Dictionary+END_StringTable)->Index = END_StringTable;
                    (Dictionary+END_StringTable)->Prefix = OldCode;
                    strcpy((Dictionary+END_StringTable)->SuffixByte,(Dictionary+OldCode)->FirstByte);
                    strcpy((Dictionary+END_StringTable)->FirstByte,(Dictionary+OldCode)->FirstByte);
                    Output_Code(END_StringTable,LZW_ENDCODE);
                    while(SuffixStackIndex>0)
                    {

                        SuffixStackIndex--;
                        PackBytes[index_local++] = SuffixStack[SuffixStackIndex];
                    }

                    SuffixStack = realloc(SuffixStack,sizeof(Byte));
                    memset(SuffixStack,0,sizeof(Byte));
                    SuffixStackIndex = 0;
                    END_StringTable++;

                }

                OldCode = code;
            }
            if(END_StringTable > CodeMask)
            {

                if(CODE_SIZE < 12)
                {
                    CODE_SIZE++;
                    CodeMask = (1 << CODE_SIZE) - 1;
                }

            }


        }while(code != LZW_ENDCODE);

        /** Free the memory **/

        free(SuffixStack);
        SuffixStack = NULL;
        memset(RawData.Data,0,RawData.Blocksize);
        free(RawData.Data);
        RawData.Data = NULL;
        memset(Dictionary,0,sizeof(StringTable)*4096);
        free(Dictionary);
        Dictionary = NULL;
        /** Free the memory done **/
        #ifdef DEBUG
        printf("LZW UNCOMPRESSION FINISHED..\r\n");
        #endif
        return(PackBytes);
    }



    /** itoa was not available for my compiler; Thus, it is implemented here **/
    /** This function is borrowed from Internet , Thanks to community */

    static char *myitoa(int i, char *s)
        {
          char *p = s;
          char *q = s;

          #ifdef DEBUG
           printf("myitoa called\r\n");
          #endif

          if (i >= 0)
          {
            do
             {
               *q++ = '0' + (i % 10);
             }
            while (i /= 10);
          }
          else if (-1 % 2 < 0)
          {
            *q++ = '-';
             p++;

            do
            {
              *q++ = '0' - i % 10;
            }
           while (i /= 10);
          }
         else
          {
            *q++ = '-';
            p++;

            do
             {
               int d = i % 10;
               i = i / 10;
               if (d) { i++; d = 10 - d; }
               *q++ = '0' + d;
             }
        while (i);
        }

       for (*q = 0; p < --q; p++)
       {
        char c = *p;
        *p = *q;
        *q = c;
       }

     return s;

    }


    /** This is the LZW dictionary output **/

        static void Output_Code(unsigned int DictIndex,unsigned int LZW_ENDCODE)
        {
           #ifdef DEBUG
           printf("Output Code called..\r\n");

           #endif
            while(1)
            {
                if((Dictionary+DictIndex)->Prefix<LZW_ENDCODE)
                {
                    PackBytes[index_local++] = (Dictionary+DictIndex)->Prefix;
                    if(*((Dictionary+DictIndex)->SuffixByte)!='\0')
                        PackBytes[index_local++] = (Byte)atoi((Dictionary+DictIndex)->SuffixByte);

                    break;

                }
                else
                {
                    SuffixStackIndex++;
                    SuffixStack	=realloc(SuffixStack,(SuffixStackIndex)*sizeof(int));

                    SuffixStack[SuffixStackIndex-1] = atoi((Dictionary+DictIndex)->SuffixByte);
                    DictIndex = (Dictionary+DictIndex)->Prefix;

                }

         }
        }



    /** Read the  LZW code **/
    static unsigned int ReadCode(Read_Data first_code)
    {

        long LongCode = 0;
        unsigned int tmpCode = 0;
        #ifdef DEBUG
        printf("READ CODE CALLED\r\n");
        #endif


        LongCode = *((long*)(first_code.Data+CodeBitOffset/8));	// Get some bytes from bufIn
        LongCode>>=(CodeBitOffset&7);				// Discard too low bits
        tmpCode = (LongCode & ((1<<CODE_SIZE)-1) );	// Discard too high bits
        CodeBitOffset += CODE_SIZE;					// Increase Bit Offset
        return tmpCode;

    }

    /** Initialize the LZW dictionary **/
    static void InitializeDictionary(unsigned int LZW_ENDCODE,StringTable *Dictionary)
    {
        volatile unsigned int temp=0;
        long Dict_Index=0;

        #ifdef DEBUG
        printf("Initialize Dict CALLED\r\n");
        #endif


        while(temp <= LZW_ENDCODE)
        {
            (Dictionary+Dict_Index)->Index=temp;
            (Dictionary+Dict_Index)->Prefix=temp;
            myitoa(((Dictionary+Dict_Index)->Prefix)&255,(Dictionary+Dict_Index)->FirstByte);
            temp++;
            Dict_Index++;
        }


    }




