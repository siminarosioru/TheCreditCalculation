#include "BankAccount.h"

//implement the functions
double BankAccount::LoanSum()
{
	m_loanSum = (m_interestRate * 100) / m_interest;
	return m_loanSum;
}

double BankAccount::TotalSum()
{
	double totalSum = 0.0;
	double member1 = m_interestRate / m_numberMonths;
	double member2 = m_loanSum / (double)m_numberMonths;

	totalSum = member1 + member2;
	return totalSum;
}

BankAccount::BankAccount(double InterestRate, double Interest, int NumberOfMonths)
{
	m_interestRate = InterestRate;
	m_interest = Interest;
	m_numberMonths = NumberOfMonths;
	m_loanSum = 0.0;
}
