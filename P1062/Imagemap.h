#pragma once

#include<iostream>
#include<list>
#include<Windows.h>

const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

class ImageMap : std::list<COORD>
{
public :
	void add(COORD coordArray[]);
	void add(short *coorAsShorts);
	void displayAt(char ch, int col, int row);
	void displayAt(int col, int row)
	{
		displayAt('*', col, row);

	}
	void eraseAt(int col, int row)
	{
		displayAt(' ', col, row);

	}

};