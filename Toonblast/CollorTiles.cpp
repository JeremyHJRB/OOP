#include "Header/CollorTiles.h"
#include "Header/Tiles.h"
#include <iostream>
using namespace std;

CollorTiles::CollorTiles() : Tiles(' '){};

CollorTiles::CollorTiles(char _symbol) : Tiles(_symbol){
	this -> symbol = _symbol;
};

void CollorTiles::setSymbol(char _symbol){
	this -> symbol = _symbol;
};

char CollorTiles::getSymbol(){
	return this -> symbol;
};