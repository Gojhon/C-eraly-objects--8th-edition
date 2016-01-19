// P307.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include<cmath>
int main()
{
	double loan,
		rate,
		moInteresRate,
		years,
		balance,
		term,
		payment;
	int numPayments;

	std::cout << "Loan amount : $ ";
	std::cin >> loan;
	std::cout << "Annual interest rate(entered as a decimal): ";
	std::cin >> rate;
	std::cout << "Years of loan : ";
	std::cin >> years;

	numPayments = static_cast<int>(12 * years);
	moInteresRate = rate / 12.0;
	term = pow((1 + moInteresRate), numPayments);
	payment = (loan*moInteresRate*term) / (term - 1.0);

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "Monthly payment : $ " << payment << std::endl;
	std::cout<<std::endl;
	std::cout << std::setw(5) << "Month" << std::setw(10) << "Interest";
	std::cout << std::setw(10) << "Principal" << std::setw(9) << "Balance" << std::endl;
	std::cout << "------------------------" << std::endl;

	balance = loan;

	for (int month = 1; month <= numPayments; month++)
	{
		double moInterest, Principal;
		moInterest = moInteresRate*balance;
		if (month != numPayments)
			Principal = payment - moInterest;
		else
		{
			Principal = balance;
			payment = balance + moInteresRate;
		}
		balance -= Principal;
		std::cout << std::setw(4) << month << std::setw(10) << moInterest;
		std::cout << std::setw(10) << Principal << std::setw(10) << balance << std::endl;
	}



	return 0;
}

