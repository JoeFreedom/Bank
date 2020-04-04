//
// Created by Joel Isuwa on 04-Apr-20.
//
#pragma once

#include <string>

using namespace std;

class Account {
private:
        static double  interestRate;
    ;
public:
        string currentAccount;
        string savingsAccount;
        string fixedDeposit;

        double sum;

        void SetSum()
        {
            sum = interestRate;
        }

        static void SetInterestRate(double interestRate)
        {
            Account::interestRate = interestRate;
        }
        static double GetInterestRate()
        {
            return interestRate;
        }

};

int Account::interestRate = 1;
