//
// Created by Isuwa Joel on 04-Apr-20.
//
#pragma once

#include <string>
#include "Account.h"


using namespace std;

class Client {
private:
    double startingAmount;
    double balance;
public:

    Client()
    {
        SetStartingAmount(); // comment required
    }
    Client(double startingAmount)
    {
        this->startingAmount= startingAmount;
    }
    void CreateFirstSavings (int months)
    {
        for (int i = 0; i < months; i++)
        {
            startingAmount = startingAmount + startingAmount * Account::GetFirstInterestRate(); // comment is required
        }
        balance = startingAmount;
    }
    void CreateSecondSavings(int months)
    {
        for (int i = 0; i < months ; i++)
        {
            startingAmount += startingAmount * Account::GetSecondInterestRate();
        }
        balance = startingAmount;
    }
    double GetBalance()
    {
        return balance;
    }

private:
    void  SetStartingAmount()
    {
        double temp; // comment required
        cout << "Enter the starting amount: "; cin >> temp;
        startingAmount = temp;
    }


};


