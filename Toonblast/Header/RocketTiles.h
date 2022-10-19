#pragma once
#include "Tiles.h"
#include <iostream>

using namespace std;

class RocketTiles : public Tiles{
    public:
    RocketTiles();
	RocketTiles(char _symbol);

    void setSymbol(char _symbol);
    char getSymbol();
};