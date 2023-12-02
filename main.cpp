#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

const int height = 600 , width = 600 ;

int main ( int argumentcount , char *argumentval[] )
{
     SDL_Init( SDL_INIT_EVERYTHING );
     
     SDL_Window *window = SDL_CreateWindow("First SDL Window" , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , height , width , SDL_WINDOW_SHOWN);
     SDL_Renderer *renderer = SDL_CreateRenderer(window, -1 ,0);
     cout<<"Nitin";

     cout<<"I joined.";
     

return 0;     
}