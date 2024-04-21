#include "pch.h"
#include "CreditCardAccount.h"#include "LoyaltyScheme.h"#using <mscorlib.dll>
using namespace System;
void CreditCardAccount::SetCreditLimit(double amount)
{
	creditLimit = amount;

}

bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		if (currentBalance >= creditLimit / 2)
		{
			if (scheme == nullptr)
			{
				scheme = gcnew LoyaltyScheme();
			}
			else
			{
				scheme->EarnPointsOnAmount(amount);
			}
		}
		return true;
	}
}void CreditCardAccount::MakeRepayment(double amount)
{
	currentBalance -= amount;
}
void CreditCardAccount::PrintStatement()
{
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}
long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}CreditCardAccount::CreditCardAccount(long number, double limit)
{
	accountNumber = number;
	creditLimit = limit;
	currentBalance = 0.0;
	scheme = nullptr;
	numberOfAccounts++;
	Console::Write("This is account number ");
	Console::WriteLine(numberOfAccounts);
}int CreditCardAccount::GetNumberOfAccounts()
{
	return numberOfAccounts;
}static CreditCardAccount::CreditCardAccount()
{
 interestRate = 4.5;
}