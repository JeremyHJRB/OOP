#include "Header/Tiles.h"
#include "Header/CollorTiles.h"
#include "Header/RocketTiles.h"
#include "Header/BombTiles.h"
#include "Header/Board.h"
#include <iostream>
using namespace std;


int main(){
	Board *board = new Board(10,10);
	board -> initBoard();
	system("cls");
	board -> printBoard();
}

