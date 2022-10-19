#include "Header/Tiles.h"
using namespace std;

Tiles::Tiles(char _symbol){
	this -> symbol = _symbol;
}

void Tiles::setSymbol(char _symbol){
	this -> symbol = _symbol;
}

char Tiles::getSymbol(){
	return this -> symbol;
}

void Tiles::pop(){
	setSymbol(' ');
}