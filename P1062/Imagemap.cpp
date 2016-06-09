#include"Imagemap.h"

void ImageMap::add(COORD coordArray[])
{
	for (int k = 0; coordArray[k].X != -1; k++)
	{
		push_back(coordArray[k]);
	}
}
void ImageMap::add(short *coordAsshorts)
{
	COORD *pCoord = reinterpret_cast<COORD *>(coordAsshorts);
	add(pCoord);
}

void ImageMap::displayAt(char ch, int col, int row)
{
	std::list<COORD>::iterator iter = this->begin();
	for (; iter != this->end(); iter++)
	{
		COORD currentPos;
		currentPos.Y = row + iter->Y;
		currentPos.X = col + iter->X;
		SetConsoleCursorPosition(console, currentPos);
		std::cout << ch << std::endl;
	}
}