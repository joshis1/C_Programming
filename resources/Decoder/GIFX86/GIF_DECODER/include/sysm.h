    /***************************************************************
    *  Copyright SJ 2013
    *
    *  Module Name: sysm.h
    *
    ***************************************************************/
    #ifndef _SYSM_
    #define _SYSM_

    /*** Headers to be included ***********************************/
    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    //#include <string.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <linux/fb.h>
    #include <sys/mman.h>
    #include <sys/ioctl.h>

    /***********Data Structure Definitions************/

    typedef unsigned char Byte;

    /*********Names of the lables to Identify Various Blocks*****/

    #define ApplicationExtension (0xFF)
    #define CommentExtension     (0xFE)
    #define GraphicControlExtension (0xF9)
    #define ImageBlockEND (NULL)
    #define GIF_Trailer (0x3B)
    #define ImageDescriptorIdentifier  (0x2c)
    #define gTypeImageBlock (0x2c)
    #define gTypeTerminator (0x3b)
    #define gTypeExtension (0x21)

    /**************Prototypes**************************/
    void * create_memory(unsigned int size);

    #endif
