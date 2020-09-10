    /***************************************************************
    *  Copyright SJ 2013
    *
    *  Module Name: gif_lzw
    *
    ***************************************************************/
    #ifndef _GIFLZW_
    #define _GIFLZW_
    #include "gif_read.h"

    typedef struct StringTable{
        unsigned int Index;
        unsigned int Prefix;
        Byte SuffixByte[1];
        unsigned long int padding[4];
        Byte FirstByte[1];
        /***********reserved to prevent memory overlap*********/

    }StringTable;

    Byte * Lzw_Decode(Read_Data RawData,ImageDesc_Info Image_Desc);

    #endif
