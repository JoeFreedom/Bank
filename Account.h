//
// Created by Joel Isuwa on 04-Apr-20.
//
#pragma once

#include <string>

using namespace std;

class Account {
private:
        static double  acoountInterestRate = 7.8;
    ;
public:
        string currentAccount;
        string savingsAccount;
        string fixedDeposit;

        double sum;

        void SetSum()
        {
            sum = acoountInterestRate;
        }

        static void SetInterestRate(double interestRate)
        {
            Account::acoountInterestRate = acoountInterestRate;
        }
        static double GetInterestRate()
        {
            return acoountInterestRate;
        }

};

int Account::acoountInterestRate = 1;
