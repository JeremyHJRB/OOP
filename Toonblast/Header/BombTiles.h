#pragma once
#include "Tiles.h"
#include <iostream>

using namespace std;

class BombTiles : public Tiles{
    public:
    BombTiles();
		BombTiles(char _symbol);

    void setSymbol(char _symbol);
    char getSymbol();
};