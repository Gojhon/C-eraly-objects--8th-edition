// P427.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

class Sale
{
private:
	double taxRate;
public:
	Sale(double rate);
	Sale();
	double calcSaleTotal(double cost);
};

Sale::Sale(double rate) :taxRate(rate)
{

}
Sale::Sale() : taxRate(0.0)
{

}

double Sale::calcSaleTotal(double cost)
{
	double total = cost + cost*taxRate;
	return total;
}
int main()
{
	Sale cashier1(.06);
	Sale cashier2;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "With a 0.06 sales tax rate, the total" << std::endl;
	std::cout << "of the $24.95 sale is $";
	std::cout << cashier1.calcSaleTotal(24.95) << std::endl;

	std::cout << std::endl << "On a tax-exempt purchase, the total" << std::endl;
	std::cout << "of the $24.95 sale is, of course $";
	std::cout << cashier2.calcSaleTotal(24.95) << std::endl;

	return 0;
}

