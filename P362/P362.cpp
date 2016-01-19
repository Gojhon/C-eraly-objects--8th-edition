// P362.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

void california();
const int BIRDS = 500;

int main()
{
	std::cout << "In main there are " << BIRDS << " birds" << std::endl;
	california();
    return 0;
}

void california()
{
	const int BIRDS = 10000;
	std::cout << "In california there are "<<BIRDS << " birds " << std::endl;

}