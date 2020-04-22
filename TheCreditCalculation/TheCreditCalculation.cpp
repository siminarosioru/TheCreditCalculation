// TheCreditCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BankAccount.h"

int main()
{
    std::cout << "Input the interest rate: ";
    double InterestRate;
    std::cin >> InterestRate;

    std::cout << "Input the interest(%): ";
    double Interest;
    std::cin >> Interest;

    std::cout << "Input the number of months: ";
    int NumberOfMonths;
    std::cin >> NumberOfMonths;

    //object(account) instantiation for the BankAccount class
    //by calling the constructor with the parameters 
    BankAccount account = BankAccount(InterestRate, Interest, NumberOfMonths);

    //display 
    std::cout << "The loaned sum is: " << account.LoanSum() << std::endl;
    std::cout << "The total sum per month is: " << account.TotalSum() << std::endl;

}
