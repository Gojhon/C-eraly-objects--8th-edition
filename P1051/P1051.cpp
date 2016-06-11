// P1051.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"NumberList2.h"

int main()
{
	NumberList2 list;  //NumberList2 객체 list를 생성
	double number; //double형 변수  number를 생성
	list.add(23); //list 객체에 23을 추가
	list.add(17); //list 객체에 17을 추가
	list.add(59); //list 객체에 59를 추가
	std::cout << "The members of the list are : ";
	list.displayList();// 입력된 값을 출력한다.
	std::cout <<std::endl;
	std::cout << "Enter a number to add : "; // 추가하고 싶은 값을 입력해주세요.
	std::cin >> number; // number에 값을 할당 
	list.add(number); //list객체에 입력된 값을 추가한다.
	std::cout << "The members of the list are  : ";
	list.displayList(); // list에 있는 값들을 출력한다.
	std::cout << std::endl;
	std::cout << "Enter a number to remove : "; //삭제하고 싶을 값을 입력한다.
	std::cin >> number; //삭제하고 싶은 값을 number에 할당한다.
	list.remove(number);//list객체에 number값을 삭제한다.
	std::cout << "The memers of the list are : ";
	list.displayList();// list에 있는 값을 출력한다.
	std::cout << std::endl;


    return 0;
}

