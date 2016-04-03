// P821.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include"mystring.h"

int main()
{
	MyString object1("This"), object2("is");
	MyString object3("a test.");
	MyString object4 = object1;
	MyString object5("is only a test");
	char string1[] = "a test.";

	std::cout << "Object1: " << object1 << std::endl;
	std::cout << "Object2: " << object2 << std::endl;
	std::cout << "Object3: " << object3 << std::endl;
	std::cout << "Object4: " << object4 << std::endl;
	std::cout << "Object5: " << object5<< std::endl;
	std::cout << "String 1:" << string1 << std::endl;
	object1 += " ";
	object1 +=object2;
	object1 += " ";
	object1 += object3;
	object1 += " ";
	object1 += object4;
	object1 += " ";
	object1 += object5;
	object1 += " ";
	std::cout << "object1: " << object1 << std::endl;

   return 0;
}

