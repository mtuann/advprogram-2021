#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

const string WINDOW_TITLE = "TEST SDL02";
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;


// bao loi SDL
void logSDLError(ostream& os, const string &msg, bool fatal) {

	os << msg << " Error: " << SDL_GetError() << std::endl;

	if (fatal) {
		SDL_Quit();
		exit(1);
	}
}


// Khoi tao SDL
void initSDL(SDL_Window* &window, SDL_Renderer* &renderer) {
	// neu khoi tao != 0 thi la bi loi
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) 
		logSDLError(std::cout, "SDL_Init", true);

	// khoi tao window (cua so ve), renderer(but ve)

	window = SDL_CreateWindow(WINDOW_TITLE.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL) logSDLError(cout, "CreateWindow", true);

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (renderer == nullptr) logSDLError(cout, "CreateRenderer", true);

	// SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
    // SDL_RenderSetLogicalSize(renderer, SCREEN_WIDTH, SCREEN_HEIGHT);

}

// Giai phong SDL
void quitSDL(SDL_Window* window, SDL_Renderer* renderer) {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}


// xac dinh su kien ban phim
void waitKeyPressed(SDL_Window* window, SDL_Renderer* renderer) {
	SDL_Event e;
	while (true) {
		if (SDL_WaitEvent(&e) != 0) {
			// su kien tu ban  phim
			if (e.type == SDL_QUIT) {
				return;
			}
			if (e.type == SDL_KEYDOWN) {
				const char *key = SDL_GetKeyName(e.key.keysym.sym);
				cout << "key pressed: " << key << endl;
				if (strcmp(key, "C") == 0) {
					SDL_SetRenderDrawColor(renderer,rand()%256, rand()%256, rand()%256 , 255);
				}
			}

			// if (e.type == SDL_KEYDOWN || e.type == SDL_QUIT) {
			// 	cout << "Event press key from keyboard";
			// 	return;
			// }
		}
		// SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);

		SDL_RenderDrawLine(renderer, 100, 100, 200, 200);

		SDL_Rect filled_rect;
		filled_rect.x = SCREEN_WIDTH - 400;
		filled_rect.y = SCREEN_HEIGHT - 150;
		filled_rect.w = 320;
		filled_rect.h = 100;

		SDL_RenderFillRect(renderer, &filled_rect);
		
		// cho 0.1s roi lai lap lai vong lap while tren
		SDL_Delay(100); // 1000 = 1s
	}

}



int main(int argc, char const *argv[]) {
	// cout << "LTNC" << endl;

	SDL_Window* window;
	SDL_Renderer* renderer;

	initSDL(window, renderer);
	// cac code ve tuong ung o day
	
	waitKeyPressed(window, renderer);

	quitSDL(window, renderer);

	return 0;
}