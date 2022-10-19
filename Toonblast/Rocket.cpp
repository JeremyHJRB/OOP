#include "Header/RocketTiles.h"
#include <iostream>
using namespace std;

RocketTiles::RocketTiles() : Tiles('^'){};

RocketTiles::RocketTiles(char _symbol) : Tiles(_symbol){
	this -> symbol = _symbol;
};

void RocketTiles::setSymbol(char _symbol){
	this -> symbol = _symbol;
};

char RocketTiles::getSymbol(){
	return this -> symbol;
};