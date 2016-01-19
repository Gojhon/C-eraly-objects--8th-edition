// P390.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;

void getLotteryinfo(int& ,int&);
long int computWays(int, int);
long int factorial(int);

int main()
{
	int pickFrom, numPicks;
	long int ways;

	std::cout << "This Program will tell you your Probabilty of " <<
		"Winning \"Little Lotto\"." << std::endl;
	getLotteryinfo(pickFrom, numPicks);
	ways = computWays(pickFrom, numPicks);

	std::cout << std::fixed << std::showpoint << std::setprecision(4);
	std::cout << std::endl << "Your Chance of Winning the Lottery is "
		<< "1 Chance in " << ways << "." << std::endl;
	std::cout << "This is a Probability of " << (1.0 / ways) << std::endl;
    return 0;
}


void getLotteryinfo(int &pickFrom, int &numpicks)
{
	std::cout << std::endl << "How Many Numbers(1~12) are there to Pick from" << std::endl;
	std::cin>>pickFrom;
	while (pickFrom<1||pickFrom>12)
	{
		std::cout << "There must be between 1 and 12 numbers." << std::endl
			<< "How Many numbers (1-12) are there to pick from?";
		std::cin >> pickFrom;
	}
	std::cout << "How many numbers must you pick to play?";
	std::cin >> numpicks;
	while (numpicks<1 || numpicks>pickFrom)
	{
		if (numpicks < 1)
			std::cout << "You must Pick at least One number" << std::endl;
		else
			std::cout << "How Many numbers must you pick to play?";
		std::cin >> numpicks;
	}

}

long int computWays(int n, int k)
{
	return (factorial(n) / factorial(k) / factorial(n - k));
}
long int factorial(int number)
{

	long int factTotal = 1;
	for (int count = number; count >= 1; count--)
	{
		factTotal *= count;
	}
	return factTotal;
}