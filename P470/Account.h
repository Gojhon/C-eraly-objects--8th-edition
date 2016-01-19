#pragma once

class Account
{
private:
	double balance;
	double intRate;
	double interest;
	int transactions;
public:
	Account(double rate, double bal);
	Account();
	void makeDeposit(double amount);
	bool withdraw(double amount);
	void calcInterest();
	double getBalance();
	double getInterest();
	int getTransactions();
};