// P436.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>

class InventoryItem
{
private:
	int partNum;
	std::string description;
	int onHand;
	double price;

public:

	void storeInfo(int p, std::string d, int oH, double cost);

	int getPartNum()
	{	return partNum;	}
	std::string getDescription()
	{   return description;	}
	double getPrice()
	{	return price;}
	int getOnHand()
	{return onHand;}
};

void storeValues(InventoryItem&);
void showValues(InventoryItem);

void InventoryItem::storeInfo(int p, std::string d, int oH, double cost)
{
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;
}

int main()
{
	InventoryItem part;

	storeValues(part);
	showValues(part);

    return 0;
}

void storeValues(InventoryItem &item)
{
	int partNum;
	std::string description;
	int qty;
	double price;

	std::cout << "Enter data for the new Part number" << std::endl;
	std::cout << "Part Number: ";
	std::cin >> partNum;
	std::cout << "Description: ";
	std::cin.get();

	std::getline(std::cin, description);
	std::cout << "Quantity on hand: ";
	std::cin >> qty;
	std::cout << "Unit Price : ";
	std::cin >> price;

	item.storeInfo(partNum, description, qty, price);
}

void showValues(InventoryItem n)
{
	std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
	std::cout << "Part Number   : " << n.getPartNum() << std::endl;
	std::cout << "Description   : " << n.getDescription()<< std::endl;
	std::cout << "Units On Hand : " << n.getOnHand() << std::endl;
	std::cout << "Price         : $" << n.getPrice() << std::endl;

}
