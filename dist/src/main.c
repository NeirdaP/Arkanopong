#include <stdlib.h>
#include <stdio.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <SDL/SDL.h>



static unsigned int WINDOW_WIDTH = 800;
static unsigned int WINDOW_HEIGHT = 600;
static const unsigned int BIT_PER_PIXEL = 32;

int main(int argc, char** argv) {
    if(-1 == SDL_Init(SDL_INIT_VIDEO)) {
        fprintf(stderr, "Impossible d'initialiser la SDL. Fin du programme.\n");
        return EXIT_FAILURE;
    }
    
    SDL_Surface* screen = NULL;
    if(NULL == (screen = SDL_SetVideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, BIT_PER_PIXEL, 
        SDL_DOUBLEBUF | SDL_OPENGL))) {
        fprintf(stderr, "Impossible d'ouvrir la fenetre. Fin du programme.\n");
        return EXIT_FAILURE;
    }
    SDL_WM_SetCaption("Arkanopong", NULL);
    
    
    int loop = 1;
    while(loop) {
        
        SDL_GL_SwapBuffers();
        
    
        SDL_Event e;
        while(SDL_PollEvent(&e)) {
            if(e.type == SDL_QUIT) {
            loop = 0;
            break;
        }
        }
    }
  
    SDL_Quit();
    
    return EXIT_SUCCESS;
}
