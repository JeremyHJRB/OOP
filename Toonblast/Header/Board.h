#pragma once
#include "Tiles.h"
#include "CollorTiles.h"
#include "RocketTiles.h"
#include "BombTiles.h"
#include <iostream>
#include <vector>

class Board{
    private:
        int rows;
        int cols;
        vector<vector<Tiles *>> board;
        
    public:
        Board(int row, int col);
        int getRow();
        int getCol();

        void setBoard(int row, int col, Tiles *tile);
        Tiles* getTile(int row, int col);

        void printBoard();
        void initBoard();
        
};