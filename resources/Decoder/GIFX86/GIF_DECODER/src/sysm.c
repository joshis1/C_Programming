    /***************************************************************
    *  Copyright SJ 2013
    *
    *  Module Name: sysm.c
    *
    ***************************************************************/

    /** This was designed to keep the platform independent **/
    /** Currently it supports only LINUX **/
    /** Perhaps; This can be used for memory leak as well **/
    /** Although running valgrind currently **/
    /** Free wrapper is missing here **/
    #include"sysm.h"

    void* create_memory(unsigned int size)
    {
        return((void*)malloc(size));
    }
