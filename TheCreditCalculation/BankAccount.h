#pragma once

class BankAccount
{
private:
	//class members
	double m_interestRate;
	double m_interest;
	int m_numberMonths;
	double m_loanSum;

public:
	//declare the functions
	double LoanSum();
	double TotalSum();

	//the constructor with the parameters
	BankAccount(double InterestRate, double Interest, int NumberOfMonths);

};

