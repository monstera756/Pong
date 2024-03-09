#include <SDL.h>
#include <stdio.h>
#include <iostream>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

bool init()
{
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL could not initialize, SDL error: %s\n", SDL_GetError();
		success = false;
	}
	else //create window
	{
		SDL_Window* window;// = NULL; //window
		window = SDL_CreateWindow("InitWindow", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

		SDL_Renderer* renderer;// = NULL;
		renderer = SDL_CreateRenderer(window, -1, 0); //calls to affect window
		SDL_SetRenderDrawColor(renderer, 100, 0, 255, 0); //uni colors - set on window
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);

		SDL_Event windowEvent;
		SDL_Delay(5000);

		if (window == NULL)
		{
			std::cout << ("Error at creating window, SDL_Error: % s\n", SDL_GetError());
			success = false;
		}
		else
		{
			SDL_Surface* screenSurface = NULL; //surface contained by window; image data type

			//pointers to SDL surfaces. The reason is that 
			//1) we'll be dynamically allocating memory to load images and 
			//2) it's better to reference an image by memory location
		}
	}
	return success;
}

int main(int argc, char* argv[])
{
	
	//if (!//
	init();
	{
		//std::cout "Failed to initialize."
	}
	//else //main loop
	{

	}
		
	//SDL_DestroyWindow();
	SDL_Quit();
	return 0;
}

//SDL_GetError

//SDL_PollEvent SDL_MouseMotionEvent - ruch myszki

//SDL_QUIT 

/*
1. Load screen image tape *
2. Load image of desks
3. Load image of ball
4.Give ball a movement/trajectory
5.. Ball interacting with desk - if ball of - game closed*
6. System of Points
*/