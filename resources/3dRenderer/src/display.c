#include "display.h"
#include <stdbool.h>

// global variables

uint32_t windows_max_width = 800;
uint32_t windows_max_height = 600;

SDL_Window *gptr_window = NULL;
SDL_Renderer *gptr_renderer = NULL;

//color buffer or frame buffer are the same.
// mirror in the memory of pixels, we want to see in our display.

uint32_t *gptr_colorBuffer = NULL;

//additive colors are used in lights that's why computer has RGB as primary colors.
// subtractive colors are used in paintings or on objects we see, i.e. subtractive colors and primary colors are R, Yellow and Blue.
// yellow + blue is green


//SDL texture is a middlemen between renderer and color buffer.

SDL_Texture *gptr_colorBuffer_texture = NULL;

void renderer_color_buffer(void)
{
   //pitch is nothing but a width 
   // https://wiki.libsdl.org/SDL3/SDL_UpdateTexture
   SDL_UpdateTexture(gptr_colorBuffer_texture, NULL, gptr_colorBuffer, sizeof(uint32_t)*windows_max_width);
   //https://wiki.libsdl.org/SDL2/SDL_RenderCopy
   SDL_RenderCopy(gptr_renderer, gptr_colorBuffer_texture, NULL, NULL);

}

void clear_color_buffer(uint32_t color)
{
   for(uint32_t y = 0; y < windows_max_height; y++)
   {
      for(uint32_t x = 0; x < windows_max_width; x++)
      {
         gptr_colorBuffer[(windows_max_width * y ) + x ] = color; 
      }
   }

}

void draw_grid(void)
{
   for(uint32_t y = 0; y < windows_max_height; y+=10)
   {
      for(uint32_t x = 0; x < windows_max_width; x+=10)
      {
         gptr_colorBuffer[(windows_max_width * y ) + x ] = 0xFF333333; 
      }
   }
}

void draw_rect(int x, int y, int width, int height, uint32_t color)
{
   uint32_t current_x = 0;
   uint32_t current_y = 0;
  for(uint32_t i = 0; i < width; i++)
  {
    for(uint32_t j = 0; j < height; j++)
    {
      current_x = x + i;
      current_y = y + j;
      gptr_colorBuffer[(windows_max_width*current_y) + current_x] = color;
    }
  }

}


bool initialize_window(void)
{

   //Initialize SDL - Simple Direct Media Layer
   if(SDL_Init(SDL_INIT_EVERYTHING) != 0) 
   {
      fprintf(stderr, "Error initializing SDL \r\n");
      return false;
   }

   SDL_DisplayMode mode;

   SDL_GetDisplayMode(0, 0 , &mode);
   windows_max_width = mode.w;
   windows_max_height = mode.h;

   // Create a SDL Window

   gptr_window = SDL_CreateWindow(
      NULL, // title , no border
      SDL_WINDOWPOS_CENTERED, // pos x - top left
      SDL_WINDOWPOS_CENTERED, // pos y - top height
      windows_max_width, // width
      windows_max_height, // height
      SDL_WINDOW_BORDERLESS
   );

   if(!gptr_window)
   {
      fprintf(stderr, "Err SDL createWindow \r\n");
      return false;
   }

   //Create a SDL Renderer

   gptr_renderer = SDL_CreateRenderer(
      gptr_window,
      -1, // default graphics
      0 // no special flag
   );

   if(!gptr_renderer)
   {
      fprintf(stderr, "Err SDL Create Renderer\r\n");
      return false;
   }

  // this means the video format buffer is set to full screen as well.
   SDL_SetWindowFullscreen(gptr_window, SDL_WINDOW_FULLSCREEN);

   return true;
}

void destroy_window(void)
{
   free(gptr_colorBuffer);
   gptr_colorBuffer = NULL;
   SDL_DestroyRenderer(gptr_renderer);
   SDL_DestroyWindow(gptr_window);
   SDL_Quit();

}

