#pragma once
class Mortgage
{
private:
	float payment, loan, rate;
	int years;
public:
	Mortgage();
	void setLoan(float);
	void setRate(float);
	void setYears(int);
	double getPayment() const;
	double getMonthly() const;
};