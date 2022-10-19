#include "Header/Board.h"
using namespace std;

Board::Board(int row, int col){
    this -> rows = row;
    this -> cols = col;
}

int Board::getRow(){
    return this -> rows;
}

int Board::getCol(){
    return this -> cols;
}

void Board::setBoard(int row, int col, Tiles *tile){
    this -> board[row][col] = tile;
}

Tiles* Board::getTile(int row, int col){
    return this -> board[row][col];
}

void Board::initBoard(){
    for (int i = 0; i < this -> rows; i++){
        vector<Tiles *> temp;
        for (int j = 0; j < this -> cols; j++){
            if (rand() % 10 == 0){
                temp.push_back(new RocketTiles());
            }else if (rand() % 10 == 0){
                temp.push_back(new BombTiles());
            }else{
                int color = rand() % 3;
                if (color == 0){
                    temp.push_back(new CollorTiles('R'));
                }else if (color == 1){
                    temp.push_back(new CollorTiles('G'));
                }else{
                    temp.push_back(new CollorTiles('B'));
                }
            }    
        }
        this -> board.push_back(temp);
    }
}

void Board::printBoard(){
    cout << "      01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10\n\n";

    for (int i = 0; i < this -> rows; i++){
        int row = i+1;
        if (row < 10){
            cout << " 0" << row << "  ";
        }else{
            cout << " " << row << "  ";
        }
        cout << " ";

        for (int j = 0; j < this -> cols; j++){
            if (j != 10 - 1){
                cout << " " << getTile(i,j) -> getSymbol()  << " | ";
            } else{
                cout << " " << getTile(i,j) -> getSymbol();
            }
        }
        cout << " " << endl;

        if (i!=getRow() -1){
            cout << "     ";
            for (int j = 0; j < getCol(); j++){
                if (j != getCol() - 1){
                    cout << "----+";
                }else{
                    cout << "----";
                }
            }
        }
        cout << endl;
    }
}
