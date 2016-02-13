#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	const int NUM_MONTHS = 12;
	int days[NUM_MONTHS];

	days[0] = 31;
	days[1] = 28;
	days[2] = 31;
	days[3] = 30;
	days[4] = 31;
	days[5] = 30;
	days[6] = 31;
	days[7] = 31;
	days[8] = 30;
	days[9] = 31;
	days[10] = 30;
	days[11] = 31;
	
	for (int month = 0; month < NUM_MONTHS; month++)
	{
		std::cout << "Month " << std::setw(2) << (month + 1) << " has ";
		std::cout << days[month] <<  " days." << std::endl;
	}

}