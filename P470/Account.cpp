#include"Account.h"


Account::Account(double rate = 0.045, double bal = 0.0) : balance(bal),interest(rate)
{
	interest = 0.0;
	transactions = 0;
}

Account::Account()
{
	interest = 0.0;
	transactions = 0;
	interest = 0.045;
	balance = 0.0;
}
void Account::makeDeposit(double amount)
{
	balance += amount;
	transactions++;
}

bool Account::withdraw(double amount)
{
	if (balance < amount)
	{
		return false;
	}
	else
	{
		balance -= amount;
		transactions++;
		return true;
	}
}
void Account::calcInterest()
{
	interest = balance*interest;
	balance += interest;
}

double Account::getBalance()
{
	return balance;
}
double Account::getInterest()
{
	return interest;
}
int Account::getTransactions()
{
	return transactions;
}