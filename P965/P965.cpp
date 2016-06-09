// P965.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include "stdafx.h"
#include "ShapeAnimator.h"

int main()
{
	Tent tent(11, 5, 13); //int baseRowPos, int baseColPos, int baseLength
	Box box(5, 65, 4, 7);//int rowPos, int colPos, int width, int height
	tent.draw(); //화면 출력
	box.draw(); //화면출력
	tent.setDirection(0, 1);
	box.setDirection(0, -1);
	for (int k = 0; k <= 20; k++)
	{
		Sleep(75);
		tent.move(); 
		box.move();
	}
	Shape *myShapes[] = { &tent, &box };
	ComplexShape cS(myShapes, 2);

	cS.setDirection(1, 1);
	for (int k = 0; k < 12; k++)
	{
		Sleep(75);
		cS.move();
	}
	box.setDirection(0, 1);
	for (int k = 0; k < 10; k++)
	{
		Sleep(75);
		box.move();
	}
	return 0;
}

