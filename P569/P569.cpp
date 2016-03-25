// P569.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"Circle.h"

const int NUM_CIRCLES = 4; //상수 변수 NUM_CIRCLES에 4를 담는다.

void test(Circle m) {}
int main()
{
	test({ 1,2,3, });
	Circle circle[NUM_CIRCLES];//Circle 객체 4개를 생성한다.

	for (int index = 0; index < NUM_CIRCLES; index++)
	{
		double r; //실수형 r을 생성한다.
		std::cout << "Enter the radius for circle " << (index + 1) << ": ";
		std::cin >> r;//실수형 r에 값을 넣는다.
		circle[index].setRadius(r);//circle객체에 radius변수에 r에 변수에 있는 값을 넣는다.
	}

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << std::endl << "Here are the areas of the " << NUM_CIRCLES << " circles." << std::endl;

	for (int index = 0; index < NUM_CIRCLES; index++)
	{
		std::cout << "circle " << (index + 1) << std::setw(8) << circle[index].findArea() << std::endl;
		//circle[index].findArea() = 3.14 * pow(radius, 2) 의 값을 출력한다. 원의 넓이를 출력
	}
    return 0;
}

