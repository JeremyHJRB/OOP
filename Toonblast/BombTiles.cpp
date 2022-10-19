#include "Header/BombTiles.h"
#include <iostream>
using namespace std;

BombTiles::BombTiles() : Tiles('*'){};

BombTiles::BombTiles(char _symbol) : Tiles(_symbol){
	this -> symbol = _symbol;
};

void BombTiles::setSymbol(char _symbol){
	this -> symbol = _symbol;
};

char BombTiles::getSymbol(){
	return this -> symbol;
};