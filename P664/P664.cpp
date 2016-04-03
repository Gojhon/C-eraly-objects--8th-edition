#include<iostream>
#include<iomanip>

int main()
{
	double * sales, total = 0.0, average;
	int numDays;

	std::cout << "How many days of sales figures do you wish";
	std::cout << "to Process?";
	std::cin >> numDays;

	sales = new double[numDays]; //double 형 포인터 변수 Sales에 입력받은 numDays만큼 메모리할당
	std::cout << "Enter the sales figures below." << std::endl;
	for (int count = 0; count < numDays; count++)
	{//Sales 각각의 할당된 메모리에 사용자가 입력된 값을 입력받는다.
		std::cout << "Day " << (count + 1) << " ";
		std::cin >> sales[count];
	}
	for (int count = 0; count < numDays; count++)
	{//Sales에 입력된 값을 int형 변수 total에 더한다 
		total += sales[count];
	}

	average = total / numDays;//total에 있는 값을 할당된 메모리 갯수 만큼 나눈 값을 average변수에 대입한다.

	// 출력구문 전체합인 Total 과  Total을 나눈 average를 출력한다.
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << std::endl << std::endl << "Total Sales : $" << total << std::endl;
	std::cout << "Average Sales: $" << average << std::endl;
	
	delete[]sales;
	//sales 객체 소멸
	sales = 0;
	//sales에 0을 할당하므로써 메모리제거

}