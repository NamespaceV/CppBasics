#include <iostream>
#include "Map.h"

extern const int w = 10;

extern int map[w][h] = {};

extern void InitMap(){
	std::cout << "h address is " << &h << std::endl;
	for (int x = 0; x < w; ++x){
		for (int y = 0; y < h; ++y) {
			map[x][y] = 0;
		}
	}
}

void DrawMap()
{
	for (int x = 0; x < w; ++x) {
		for (int y = 0; y < h; ++y) {
			std::cout << map[x][y];
		}
		std::cout << std::endl;
	}
}
