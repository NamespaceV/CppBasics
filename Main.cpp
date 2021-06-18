#include <iostream>
#include <vector>
#include "Map.h"
#include "Dude.h"

int main()
{
    std::cout << "Hello World!\n";

    InitMap();
    DrawMap();
    char x;
    std::cin >> x;
    auto dudes = std::vector<Dude*>();
    dudes.push_back(new Dude(1, 2));
    dudes.push_back(new Dude(4, 5));
    DrawMap();

    std::cin >> x;
    for (auto dude: dudes)
    {
        delete dude;
    }
}