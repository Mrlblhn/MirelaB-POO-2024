
#include "LoyaltyScheme.h"
#pragma once
#include "pch.h"

ref class CreditCardAccount
{
	
public:
	void RedeemLoyaltyPoints();
	literal System::String^ name = "Super Platinum Card";
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();

private:
	LoyaltyScheme^ scheme; 
	static double interestRate;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
};

