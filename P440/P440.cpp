// P440.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iomanip>
#include<string>
#include<iostream>

class InventoryItem
{
private:
	int partNum;
	std::string description;
	int onhand;
	double price;

public:
	void storeInfo(int p, std::string d, int oh, double cost);

	int getPartNum()const
	{return partNum; }
	std::string getDescription() const
	{return description;	}
	int getOnHand()const
	{return onhand;}
	double getPrice()const
	{return price;}
};

void InventoryItem::storeInfo(int p, std::string d, int oh, double cost)
{
	partNum = p;
	description = d;
	onhand = oh;
	price = cost;
}
InventoryItem createItem();
void showValues(const InventoryItem&);

int main()
{
	InventoryItem part = createItem();
	showValues(part);
    return 0;
}
InventoryItem createItem()
{
	InventoryItem tempItem;
	int partNum;
	std::string description;
	int qty;
	double Price;
	
	std::cout << "Enter data for the new Part Number" << std::endl;
	std::cout << "Part Number:";
	std::cin >> partNum;
	std::cout << "Description : ";
	std::cin.get();

	std::getline(std::cin, description);
	std::cout << "Quantity on hand: ";
	std::cin >> qty;
	std::cout << "Unit Price: ";
	std::cin >>Price;

	tempItem.storeInfo(partNum, description, qty, Price);
	return tempItem;
}
void showValues(const InventoryItem& item)
{
	std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
	std::cout << "Part Number   : " << item.getPartNum() << std::endl;
	std::cout << "Description   : " << item.getDescription() << std::endl;
	std::cout << "Units On Hand : " << item.getOnHand() << std::endl;
	std::cout << "Price         : $" << item.getPrice() << std::endl;

}
