#pragma once
#include "Tiles.h"
#include <iostream>

using namespace std;

class CollorTiles : public Tiles{
    public:
    CollorTiles();
	CollorTiles(char _symbol);

    void setSymbol(char _symbol);
    char getSymbol();
};