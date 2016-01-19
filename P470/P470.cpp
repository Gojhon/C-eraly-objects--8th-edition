// P470.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iomanip>
#include<iostream>
#include "Account.h"

void displayMenu();
char getChoice(char);
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
	const char MAX_CHOICE = '7';
	Account savings;
	char choice;
	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	do
	{
		displayMenu();
		choice = getChoice(MAX_CHOICE);
		switch (choice)
		{
		case '1': std::cout << "The Current balance is $ ";
			      std::cout << savings.getBalance() << std::endl;
			break;
		case '2': std::cout << "There have been ";
			std::cout << savings.getTransactions() << "Transactions." << std::endl;
			break;
		case '3' : std::cout << "Interest earned earned for this Period : $";
			std::cout << savings.getInterest() << std::endl;
			break;
		case '4' :  makeDeposit(savings);
			break;
		case '5': withdraw(savings);
			break;
		case '6': savings.calcInterest();
			std::cout << "Interest added ." << std::endl;
			break;
		default:
			break;
		}
	} while (choice != '7');
    return 0;
}

void displayMenu()
{
	std::cout << std::endl << std::endl << "MENU" << std::endl << std::endl;
	std::cout << "1) Display the account balance " << std::endl;
	std::cout << "2) Display the number of transactions" << std::endl;
	std::cout << "3) Display interest earned for this Period" << std::endl;
	std::cout << "4) Make a deposit" << std::endl;
	std::cout << "5) Make a withdrawal" << std::endl;
	std::cout << "6) Add interest for this period" << std::endl;
	std::cout << "7) Exit the Program" << std::endl;
	std::cout << "Enter Yor choice: " << std::endl;
}
char getChoice(char max)
{
	char choice = std::cin.get();
	std::cin.ignore();

	while (choice<'1' || choice>max)
	{
		std::cout << "Choice must be between 1 and" << max << "." << "Please re-Enter choice: ";
		choice = std::cin.get();
		std::cin.ignore();
	}
	return choice;
}
void makeDeposit(Account &account)
{
	double dollars;

	std::cout << "Enter the amount of the deposit: ";
	std::cin >> dollars;
	std::cin.ignore();
	account.makeDeposit(dollars);
}


void withdraw(Account &account)
{
	double dollars;

	std::cout << "Enter the amount of the withdrawal : ";
	std::cin >> dollars;
	std::cin.ignore();
	if (!account.withdraw(dollars))
		std::cout << "Error : witdrawal amount too large" << std::endl;
}