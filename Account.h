//
// Created by Joel Isuwa on 04-Apr-20.
//
#pragma once

#include <string>

using namespace std;

class Account {
private:
        static int refinance;
    public:
        string currentAccount;
        string savingsAccount;
        string fixedDeposit;

        double interestRate;
        void SetCredit()
        {
            credit = refinance;
        }

        static void SetRefinance(int refinance)
        {
            Account::refinance = refinance;
        }
        static int GetRefinance()
        {
            return refinance;
        }
    };
    ​
    int Account::refinance = 1;
};
