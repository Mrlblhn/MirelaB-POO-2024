//#include "stdafx.h"
#include "pch.h"
#include "LoyaltyScheme.h"
#include "CreditCardAccount.h"
#using <mscorlib.dll>
using namespace System;

LoyaltyScheme::LoyaltyScheme()
{
	Console::WriteLine("Congratulations, you now qualify for"
		" bonus points");
	totalPoints = 0;
}
void LoyaltyScheme::EarnPointsOnAmount(double amountSpent)
{
	int points = (int)(amountSpent / 10);
	totalPoints += points;
	Console::Write("New bonus points earned: ");
	Console::WriteLine(points);
}

void LoyaltyScheme::RedeemPoints(int points)
{
	if (points <= totalPoints)
	{
		totalPoints -= points;
	}
	else
	{
		totalPoints = 0;
	}
}

int LoyaltyScheme::GetPoints()
{
	return totalPoints;
}

void CreditCardAccount::RedeemLoyaltyPoints()
{
	// If the LoyaltyScheme object doesn't exist yet...
	if (scheme == nullptr)
	{
		// Display an error message
		Console::WriteLine("Sorry, you do not have a "
			"loyalty scheme yet");
	}
	else
	{
		// Tell the user how many points are currently available
		Console::Write("Points available: ");
		Console::Write(scheme->GetPoints());
		Console::Write(". How many points do you want "
			" to redeem? ");
		// Ask the user how many points they want to redeem
		String^ input = Console::ReadLine();
		int points = Convert::ToInt32(input);
		// Redeem the points
		scheme->RedeemPoints(points);
		// Tell the user how many points are left
		Console::Write("Points remaining: ");
		Console::WriteLine(scheme->GetPoints());
	}
}