//=========================
// Ryan Gentzler
// Programming Assingment #4
// Desc: Mortgage Payment
//=========================
#include <iostream>
#include <string>
#include "Mortgage.h"
using namespace std;

int main()
{
	Mortgage m;
	string input;
	float inputf;
	int inputi;
	bool success = false;

	//Loan 123000
	//Rate 4
	//Years 15

	cout << "How much did you loan?\n";
	while (!success)
	{
		cin >> input;
		try
		{
			inputf = stof(input);
			m.setLoan(inputf);
			success = true;
		}
		catch (const std::exception&)
		{
			cout << "That didn't work dummy. That's not a valid input :P.\n";
		}
	}
	cout << "How much is the rate?\n";
	success = false;
	while (!success)
	{
		cin >> input;
		try
		{
			inputf = stof(input);
			m.setRate(inputf);
			success = true;
		}
		catch (const std::exception&)
		{
			cout << "That didn't work dummy. That's not a valid input :P.\n";
		}
	}
	cout << "How many years are you going to have to pay this off for?\n";
	success = false;
	while (!success)
	{
		cin >> input;
		try
		{
			inputi = stoi(input);
			m.setYears(inputi);
			success = true;
		}
		catch (const std::exception&)
		{
			cout << "That didn't work dummy. That's not an int :P.\n";
		}
	}

	cout << "Your Monthly Payment is:\t" << m.getMonthly() << endl;
	cout << "Your Total Payment is:\t\t" << m.getPayment();

	return 0;
}