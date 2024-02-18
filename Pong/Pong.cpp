#include <SDL.h>
#include <stdio.h>
#include <iostream>

int main(int argc, char* argv[])
{
	SDL_Window* window = NULL; //window

	SDL_Surface* screenSurface = NULL; //surface contained by window

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "0";
	}
	else //create window
	{
		window = SDL_CreateWindow("InitWindow", 100, 100, 100, 100, SDL_WINDOW_FULLSCREEN);

		if (window == NULL)
		{
			std::cout << "0";
		}
		SDL_Delay(3000);
	}

	SDL_DestroyWindow(window);
	SDL_Quit();


	return 0;
}