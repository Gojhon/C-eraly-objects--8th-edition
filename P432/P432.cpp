// P432.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

class SimpleStat
{
private:
	int largest;
	int sum;
	int count;

	bool isNewLargest(int);

public :
	SimpleStat();
	bool addNumber(int);
	double getAverage();

	int getLargest();
	int getCount();

};
SimpleStat::SimpleStat():largest(0),sum(0),count(0)
{
}

int SimpleStat::getLargest()
{
	return largest;
}

int SimpleStat::getCount()
{
	return count;
}

bool SimpleStat::addNumber(int num)
{
	bool goodNum = true;
	if (num >= 0) //입력된 값이 0이상일 경우
	{
		sum += num; // 입력된 값을 sum 변수에 값을 더한다
		count++; //if루트에 타면 count 변수의 값이 올라간다.
		if (isNewLargest(num)) //if 안에 isNewLargest(num)(값 비교) 함수를 호출 참일 경우 거짓일 경우
			 largest = num;//참일 경우 largest 변수에 값을 대입한다.
	}
	else
	{
		goodNum = false;
	}
	return goodNum; //참거짓을 리턴한다.
}


bool SimpleStat::isNewLargest(int num)
{
	if (num > largest) // 입력된 숫자가 그 전숫자보다 큰 경우 
		return true;  // 참을 출력
	else
		return false; //아닌 경우 거짓 출력
}
double SimpleStat::getAverage()
{
	if (count > 0) // 입력된 숫자가 한개 이상인 경우
		return static_cast<double>(sum) / count; //입력 된 숫자의 합을 입력 된 숫자의 갯수로 나눈다.
	else
		return 0;
}
int main()
{
	int num;
	SimpleStat statHelper;

	std::cout << "Please enter the set of non-negative interger" << std::endl;
	std::cout << "Values you Want to average. Separate them with" << std::endl;
	std::cout << "Spaces and enter -1 after the last Value" << std::endl;
	// 여러개의 숫자를 입력하고 -1 값을 입력시 프로그램은 종료한다.
	std::cin >> num;  // 숫자입력 
	while (num >= 0)  //입력 된 숫자가 0보다 같거나 큰 숫자인 경우
	{
		statHelper.addNumber(num); //statHelper클래스의 addNumber를 호출한다.
		std::cin >> num;
	}
	std::cout << std::endl << "You entered" << statHelper.getCount() << " values" << std::endl;
	std::cout << "The largest values was " << statHelper.getLargest() << std::endl;
	std::cout << "The average values was " << statHelper.getAverage() << std::endl;


    return 0;
}

