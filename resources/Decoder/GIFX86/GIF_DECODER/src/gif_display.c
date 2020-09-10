 /***************************************************************
    *  Copyright SJ 2013
    *
    *  Module Name: gif_display
    *
    ***************************************************************/
#include"sysm.h"
#include"gif_display.h"
#include"gif_lzw.h"
#include"gif_read.h"

/**** MACRO TEST **/
#define SHREYAS 8

/** END HERE **/


/** This is using the Linux Fb calls here; and is tightly coupled with Linux Framebuffer **/
static int fbfd = 0;
static struct fb_var_screeninfo vinfo;
static struct fb_fix_screeninfo finfo;
static long int screensize = 0;
static char *fbp = 0;
static int x = 0, y = 0;
static long int location = 0;

/** This is a clone to linux Frame buffer, and will be called to dump on Framebuffer **/
char *local_display_mem;

/** local functions **/
static void SetBackground(FrameData *tempInfo);
static void SetPixel(char *fbp, unsigned int x, unsigned int y, Byte red, Byte green, Byte blue);


/** This is the entry function to initialize the display **/
void display_init()
{
    int macro_test = SHREYAS;
    printf("The macro test = %d\r\n",macro_test);
    /** I could see it is expanded, when I ran gcc -E **/

    // Open the file for reading and writing
    fbfd = open("/dev/fb0", O_RDWR);
    if (fbfd == -1)
    {
        perror("cannot open framebuffer device");
        exit(1);
    }
    #ifdef DEBUG
    printf("The framebuffer device was opened successfully.\n");
    #endif

    /** Read the Screen Information **/
        if (ioctl(fbfd, FBIOGET_FSCREENINFO, &finfo) == -1)
        {
          perror("Driver error-- reading fixed information");
          exit(1);
        }

    // Get variable screen information

    if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo) == -1)
    {
        perror("Error reading variable information");
        exit(1);
    }

    #ifdef DEBUG
    printf("%dx%d, %dbpp\n", vinfo.xres, vinfo.yres, vinfo.bits_per_pixel);
    #endif

      // Figure out the size of the screen in bytes
    screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

    // Map the device to memory
    fbp = (char *)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);

    local_display_mem = (char*)malloc(screensize);

    if ((int)fbp == -1)
     {
        perror("Error: mmap failed\r\n");
        exit(1);
     }
    #ifdef DEBUG
    printf("The framebuffer device was mapped to memory successfully.\n");
    #endif

    printf("Shreyas..Display Initialized..\r\n");


   //munmap(fbp, screensize);
   //close(fbfd);

}

/** This function is called by gif_read to display the Image **/
#ifdef DEBUG
int count;
#endif

void Display(FrameData *FrameInfo)
{

	/*short int ImageStartX = 0;
	short int ImageStartY = 0; */
	unsigned int ImageStartX = 0;
	unsigned int ImageStartY = 0;
	int Index = 0;

	printf("\r\n INFO: Display Called.\r\n");

	while(1)
	{

		Index = 0;
		ImageStartX = (FrameInfo->frameScreenInfo.LeftPosition);
		ImageStartY = (FrameInfo->frameScreenInfo.TopPosition);


		while(ImageStartY < ((FrameInfo->frameScreenInfo.ImageHeight)+(FrameInfo->frameScreenInfo.TopPosition)))
		{

		    while(ImageStartX < ((FrameInfo->frameScreenInfo.ImageWidth)+(FrameInfo->frameScreenInfo.LeftPosition)))
			{
				if(FrameInfo->frame[Index] != FrameInfo->transperencyindex)
				{
				  #ifndef __DISPLAY_DISABLE
                  SetPixel(local_display_mem,ImageStartX,ImageStartY,((FrameInfo->CMAP)+(FrameInfo->frame[Index]))->Red,((FrameInfo->CMAP)+(FrameInfo->frame[Index]))->Green,((FrameInfo->CMAP)+(FrameInfo->frame[Index]))->Blue);
	              #endif
				  
                   #ifdef DEBUG
                   count++;
                   #endif

				}


				Index++;
				ImageStartX++;
			}


			ImageStartY++;


			ImageStartX=(FrameInfo->frameScreenInfo.LeftPosition);


		}

        #ifdef DEBUG
        printf("INFO:..Dumping Framebuffer\r\n");
        printf("Pixel hit=%d\r\n",count);
        count = 0;
        printf("the Frameinfo.leftposition=%d FrameInfo->frameScreenInfo.topposition=%d\r\n",FrameInfo->frameScreenInfo.LeftPosition,FrameInfo->frameScreenInfo.TopPosition);
        printf("the Frameinfo.ImageWidth=%d FrameInfo->frameScreenInfo.ImageHeight=%d\r\n",FrameInfo->frameScreenInfo.ImageWidth,FrameInfo->frameScreenInfo.ImageHeight);
        #endif
		
		
       #ifndef __DISPLAY_DISABLE
       memcpy(fbp,local_display_mem,screensize);
	   #endif

        /** Tune this multiplication to meet the right output on the display **/
		usleep((FrameInfo->InterFrameDelay)*10000);

	    if(	FrameInfo->DisposalMethod == 2)
		{
            //printf("set the Background\r\n");
			#ifndef __DISPLAY_DISABLE
            //SetBackground(FrameInfo);
			#endif
		}
		FrameInfo = FrameInfo->Next;

	 }


}

static void SetBackground(FrameData *tempInfo)
{

	unsigned int ImageStartX=0;
	unsigned int ImageStartY=0;


	ImageStartX=(tempInfo->frameScreenInfo.LeftPosition);
	ImageStartY=(tempInfo->frameScreenInfo.TopPosition);


    while(ImageStartY<(tempInfo->frameScreenInfo.ImageHeight))
	{

		while(ImageStartX<(tempInfo->frameScreenInfo.ImageWidth))
		{

            SetPixel(local_display_mem,ImageStartX,ImageStartY,255,255,255);

			ImageStartX++;
		}

		ImageStartX=(tempInfo->frameScreenInfo.LeftPosition);
		ImageStartY++;


	}



}

/** local macro **/

typedef unsigned long DWORD;
typedef unsigned char BYTE;
typedef unsigned short WORD;


#define RGB(r, g ,b)  ((DWORD) (((BYTE) (r) | \
    ((WORD) (g) << 8)) | \
    (((DWORD) (BYTE) (b)) << 16)))

static void SetPixel(char *fbp_lc, unsigned int x, unsigned int y, Byte red, Byte green, Byte blue)
{
           //printf("Shreyas..set pixel called\r\n");
           location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8) +
                       (y+vinfo.yoffset) * finfo.line_length;

            if (vinfo.bits_per_pixel == 32)
            {
                #if 1
                *(fbp_lc + location) =     blue;        // Some blue
                *(fbp_lc + location + 1) = green;     // A little green
                *(fbp_lc + location + 2) = red;    // A lot of red
                *(fbp_lc + location + 3) = 0;      // No transparency
                #endif

               #if 0 /** Windows RGB**/
                *((unsigned short int*)(fbp_lc + location)) =  RGB(red,green,blue);
               #endif

        //location += 4;
            }
            else
            { //assume 16bpp
                unsigned short int t = red<<11 | green << 5 | blue;
                *((unsigned short int*)(fbp_lc + location)) = t;
            }

             //printf("Shreyas..set pixel exit called\r\n");

}

