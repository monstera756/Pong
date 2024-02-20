#include <SDL.h>
#include <stdio.h>
#include <iostream>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* argv[])
{
	SDL_Window* window = NULL; //window

	SDL_Surface* screenSurface = NULL; //surface contained by window; image data type
	//pointers to SDL surfaces. The reason is that 
	//1) we'll be dynamically allocating memory to load images and 
	//2) it's better to reference an image by memory location

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "0";
	}
	else //create window
	{
		window = SDL_CreateWindow("InitWindow", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		if (window == NULL)
		{
			std::cout << ("Error: SDL_Error: % s\n", SDL_GetError() );
		}
		SDL_Delay(3000);
	}

	SDL_DestroyWindow(window);
	SDL_Quit();


	return 0;
}

//SDL_GetError

//SDL_PollEvent SDL_MouseMotionEvent - ruch myszki

//SDL_QUIT 

/*
1. Load screen image tape
2. Load image of desk
3. Load image of ball
4. Load blocks to hit
5.Give ball a movement/trajectory
6. Ball interacting with desk - if ball of - game closed*
7. Ball interacting with blocks/
8. System of Points
*/