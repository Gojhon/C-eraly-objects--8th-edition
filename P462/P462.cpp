// P462.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<string>

struct InvItem
{
	int PartNum;
	std::string description;
	int onHand;
	double Price;
};

void getItemdata(InvItem&);

void showItem(const InvItem&);

int main()
{
	InvItem part;

	getItemdata(part);
	showItem(part);
    return 0;
}

void getItemdata(InvItem& item)
{
	std::cout << "Enter The Part Numver : " ;
	std::cin >> item.PartNum;
	std::cout << "Enter the Part Description : ";
	std::cin.get();

	std::getline(std::cin, item.description);
	std::cout << "Enter the Quantity on hand: ";
	std::cin >> item.onHand;
	std::cout << "Enter the Unit Price: ";
	std::cin >> item.Price;

}

void showItem(const InvItem& item)
{
	std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
	std::cout << "Part Number   : " << item.PartNum << std::endl;
	std::cout << "Description   : " << item.description << std::endl;
	std::cout << "Units On Hand : " << item.onHand << std::endl;
	std::cout << "Price         : $" << item.Price << std::endl;

}