// P547.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<iomanip>

int main()
{
	const int NUM_DIVS = 3; //int형 상수 NUM_DIVS에 3을 입력한다.(단,값은 변하지 안는다/고정된다)
	const int NUM_QTRS = 4; //int형 상수 NUM_QTRS에 4을 입력한다.(단,값은 변하지 안는다/고정된다)

	double sales[NUM_DIVS][NUM_QTRS]; // double형의 2차원 배열을 생성한다 3x4
	double totalSales = 0;
	int div, qtr;
	
	std::ifstream datafile; //파일입출력을 할 수 있는 datafile변수를 생성한다.

	datafile.open("sales2.dat");  //같은 폴더에서 sales2.dat를 검색한다.
	if (!datafile)//파일이 없을경우
		std::cout << "Error Opening data file" << std::endl; 
	else //파일이 있을경우
	{
		std::cout << std::fixed << std::showpoint << std::setprecision(2);
		std::cout << "Quarterly Sales by Division" << std::endl;
	
		for (div = 0; div < NUM_DIVS; div++)
		{
			for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				std::cout << "Division " << (div + 1) << ", Quarter" << (qtr + 1) << ": $";
				//2차원 배열의 순서를 출력한다.Division값과 Quarter의 값을 값을 출력한다.
				datafile >> sales[div][qtr]; //파일에 있는 값을 sales배열에 차례대로 입력받는다.
				std::cout << sales[div][qtr] << std::endl; //각각의 배열의 값을 출력한다.
			}
			std::cout << std::endl;
		}
		datafile.close();
		for (div = 0; div < NUM_DIVS; div++)
		{
			for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				totalSales += sales[div][qtr]; //각각 배열의 값을 더한다.
			}
		}
		std::cout << "The Total sales for the company are : $";
		std::cout << totalSales << std::endl; //sales2.dat있는 값의 합계를 출력한다.
	}
	return 0;
} 

