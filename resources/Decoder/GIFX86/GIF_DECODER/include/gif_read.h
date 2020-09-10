    /***************************************************************
    *  Copyright SJ 2013
    *
    *  Module Name: gif_read
    *
    ***************************************************************/


    #ifndef _READ_
    #define _READ_


    /*********************Image Header**********************/

    typedef struct HeadInfo{

        Byte signature[3];

        Byte version[3];

    }Header;

    /** This is a logical Screen Descriptor Information **/

    typedef struct LogicalScreenDescriptorInfo
    {
        short int logicalScreenWidth;

        short int  logicalScreenHeight;

        Byte bitField;

        Byte backgroundColor;

        Byte pixelAspectRatio;

    }Screen_Desp_Info;

    typedef struct BitFieldInfo
    {
        int Global_Clr_Flag;

        int	Color_Res[3];

        int	Sort_Flag;

        int Siz_GlbTable;

        int  ByteSiz_GlbTable;

    }Bit_Field_Info;


    typedef struct Global_ColorTableEntry
    {
        Byte Red;
        Byte Green;
        Byte Blue;
    }GlobalTable_RGB_Color;

    typedef struct ImageDescriptor
    {
        short  int LeftPosition;
        short  int TopPosition;
        short  int ImageWidth;
        short  int ImageHeight;
        Byte PackedField;
        int local_Clr_Flag;
        int Interlace_Flag;
        int Sort_Flag;
        int reserved_bits;
        int local_clr_Size;
    }ImageDesc_Info;


    typedef struct Grap_Render_Block
    {
        Byte Block_Size;
        Byte Packed_Field;
        short int Delay_Time;
        Byte Transp_Clr_Index;
        Byte BlockTerminator;
        int Reserved;
        int DisposalMethod;
        int UserInput;
        int Tranparent_Clr_Flag;

    }Grap_Rendblk;


    typedef struct ImgeData
    {
        Byte *ImgData;
        Byte BlockSize;
        struct ImgeData *Next_ImagBlk;

    }Data_Img;


    typedef struct DecodedData
    {
        long unsigned int  *Data;
        struct DecodedData *Next;
    }DecodedData;

    typedef struct ImageBlock
    {
        int LZW_CODESIZE;
        int  BlockSize;
        Data_Img *Datablk_Img;
        Data_Img *ImageDataStart;
        DecodedData *first_Output;
    }ImgBlk;

    typedef struct FrameData
    {
        Byte *frame;
        ImageDesc_Info frameScreenInfo;
        unsigned int InterFrameDelay;
        int transperencyflag;
        int GlobalClrTableFlag;
        Byte BackgroundColorIndex;
        Byte transperencyindex; /** trial commented 27-Aug-2013 **/
        int DisposalMethod;
        GlobalTable_RGB_Color *CMAP;
        int InterlaceFlag;
        struct FrameData *Next;

    }FrameData;


    typedef struct Read_Data
    {

        Byte *Data;
        unsigned int LZW_CODESIZE;
        unsigned int Blocksize;
    }Read_Data;

    #endif
