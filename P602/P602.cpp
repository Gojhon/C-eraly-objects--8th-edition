// P602.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>

class Inventory
{
private:
	std::string itemcode;
	std::string description;
	double price;

public:
	Inventory();
	Inventory(std::string, std::string , double);

	std::string getCode()const;
	std::string getDescription()const;
	double getPrice() const;
};
Inventory::Inventory()
{
	itemcode = "xxx";
	description = " ";
	price = 0.0;
}

Inventory::Inventory(std::string c, std::string d, double p)
{
	itemcode = c;
	description = d;
	price = p;
}

std::string Inventory:: getCode()const
{
	std::string code =itemcode;
	return code;
}

std::string Inventory::getDescription()const
{
	std::string d= description;
	return d;
}

double Inventory::getPrice()const
{
	return price;
}

int search(const Inventory[], int, std::string);

int main()
{
	const int SIZE = 6;
	Inventory silverware[SIZE] =
	{ 
		Inventory("S15","soup Spoon",2.35),
	  Inventory("S12","teaspoon",2.19),
	  Inventory("F15","dinner fork",3.19),
	  Inventory("F09","salad fork",2.25),
	  Inventory("K33","knife",2.35 ),
	  Inventory("K41","steak knife",4.15) 
	};
	std::string desiredCode;
	int pos;
	char doAgain;

	do
	{
		std::cout << std::endl << "Enter an Item code: ";
		std::cin >> desiredCode;

		pos = search(silverware, SIZE, desiredCode);

		if (pos == -1)
			std::cout << "That code does not exist in the array " << std::endl;
		else
		{
			std::cout << "This " << silverware[pos].getDescription()
				<< "costs $" << silverware[pos].getPrice() << std::endl;
		}

		std::cout << "Look up another Price(Y/N)?";
		std::cin >> doAgain;
	} while (doAgain== 'Y' || doAgain == 'y');
    
	return 0;
}

int search(const Inventory object[], int size, std::string value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size&& !found)
	{
		if (object[index].getCode() == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;

}

