
#include <stdio.h>


#include <stdbool.h>
//ensures size of int is 32 or 16 bits - irrespective of the platform.
#include <stdint.h>

#include "main.h"
#include "display.h"

bool is_running = true;


void setup(void)
{

  gptr_colorBuffer = (uint32_t*)malloc(sizeof(uint32_t) * windows_max_width * windows_max_height);
  if(!gptr_colorBuffer)
  {
    fprintf(stderr, "malloc failed to create color Buffer\r\n");
    exit(1);
  }
  //https://wiki.libsdl.org/SDL3/SDL_PixelFormat
  gptr_colorBuffer_texture = SDL_CreateTexture(gptr_renderer,  SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, windows_max_width, windows_max_height);

}


void update(void)
{

}

void process_input(void)
{
   SDL_Event event;
   SDL_PollEvent(&event);

   switch(event.type)
   {
       case SDL_QUIT:
         is_running = false;
         break;

       case SDL_KEYDOWN:
       if(event.key.keysym.sym == SDLK_ESCAPE)
       {
         is_running = false;
       }
       break;

   }

}

void render(void)
{
   SDL_SetRenderDrawColor(
      gptr_renderer, 
      0, // red color
      0 , // no green
      0, // no blue
      255 //no transparent, complete opaque
   );
   SDL_RenderClear(gptr_renderer);

   draw_grid();
   draw_rect(50,50, 80, 80, 0xFF000AAA);
   renderer_color_buffer();

   
   clear_color_buffer(0xFF000000);

   SDL_RenderPresent(gptr_renderer);
}
 




int main(void)
{
   is_running = initialize_window();
   setup();
   //game loop i.e. event loop
   while(is_running)
   {
      // process input
      process_input();
      //update
      update(); //30 frames per second
      render(); //draw P5.js game engine, unity renderer
   }

   destroy_window();

   return 0;
}
