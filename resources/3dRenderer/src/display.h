#ifndef __DISPLAY__
#define __DISPLAY__

#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL.h>
#include <stdbool.h>

// constants

extern uint32_t windows_max_width;
extern uint32_t windows_max_height;


extern SDL_Window *gptr_window;
extern SDL_Renderer *gptr_renderer;
extern uint32_t *gptr_colorBuffer;
extern SDL_Texture *gptr_colorBuffer_texture;


void renderer_color_buffer(void);
void clear_color_buffer(uint32_t color);
void draw_grid(void);
void draw_rect(int x, int y, int width, int height, uint32_t color);


bool initialize_window(void);
void destroy_window(void);


#endif