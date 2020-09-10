    /***************************************************************
    *  Copyright SJ 2013
    *
    *  Module Name: gif_read
    *
    ***************************************************************/
    #include"sysm.h"
    #include "gif_read.h"


    int main(int argc , char ** argv[])
    {
         #ifdef DEBUG
        /** Printing the function name, line number to debug the program **/
        printf("Entered file:%s: line:%d: func_name:%s\r\n", __FILE__, __LINE__, __func__);
        #endif
        #ifndef __DISPLAY_DISABLE
        /** initialize Display **/
         display_init();
		#endif 

        /**Get the Raw data out of GIF Image and Draw it**/
        Gif_Read();
//  testing.

        return 0;

    }
