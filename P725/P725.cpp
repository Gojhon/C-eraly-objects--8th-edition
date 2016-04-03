// P725.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
#include"overload.h"

int main()
{
	NumberArray first(3, 10.5);
	//NumberArray 클래스의 first객체를 생성
	NumberArray second(5, 20.5);
	//NumberArray 클래스의 second객체를 생성
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << "Fist object's data is ";
	first.print(); //first의 값을 출력한다.
	//10.5를 3번 출력한다.
	std::cout << std::endl << "Second object's data is ";
	
	second.print();
	//20.5를 5번 출력한다.
	std::cout << std::endl << "Now we will assign the second object" <<
		"to the first" << std::endl;
	first = second;
	//void operator=(const NumberArray &right)함수 호출한다.

	std::cout << "First object's data is ";
	first.print();
	//20.5를 5번 출력한다.
	std::cout << std::endl << "The second object's data is ";
	second.print();
    //20.5를 5번 출력한다.
    return 0;
}

