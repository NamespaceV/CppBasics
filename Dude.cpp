#include <iostream>
#include "Dude.h"
#include "Map.h"

Dude::Dude(int x, int y) {
	this->x = x;
	this->y = y;
	map[x][y] = 1;
	std::cout << "h address is " << &h << std::endl;

}

