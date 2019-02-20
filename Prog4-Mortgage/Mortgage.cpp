#include <iostream>
#include "Mortgage.h"
using namespace std;

Mortgage::Mortgage()
{
	payment = 0;
	loan = 0;
	rate = 0;
	years = 0;
}

void Mortgage::setLoan(float input)
{
	loan = input;
}

void Mortgage::setRate(float input)
{
	rate = input;
}

void Mortgage::setYears(int input)
{
	years = input;
}

//Calculates term and then uses term to determine monthly payment as a double
double Mortgage::getMonthly() const
{
	float temp = pow(1 + rate / 12, 12 * years);
	return (loan * (rate / 12) * temp) / (temp - 1);
}

//Takes monthly payment and returns total owed to the bank if cost goes through;
double Mortgage::getPayment() const
{
	return getMonthly() * 12 * years;
}