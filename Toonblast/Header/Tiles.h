#pragma once
#include <string>
#include <iostream>

using namespace std;

class Tiles{
    protected:
		char symbol;
    public:
		Tiles(char _symbol = ' ');

        virtual void pop();

		void setSymbol(char _symbol);
		char getSymbol();
};