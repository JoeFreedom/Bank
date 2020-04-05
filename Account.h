//
// Created by Joel Isuwa on 04-Apr-20.
//
#pragma once

#include <string>

using namespace std;

class Account {
private:
    static double firstInterestRate;
    static double secondInterestRate;

public:
    static void SetFirstInterestRate(double percentage)
    {
        firstInterestRate = percentage;
    }
    static double GetFirstInterestRate()
    {
        return firstInterestRate / 100; //comment required
    }
    static void SetSecondInterestRate(double percentage)
    {
        secondInterestRate = percentage;
    }
    static double GetSecondInterestRate()
    {
        return secondInterestRate / 100; //comment required
    }

};

double Account::firstInterestRate = 1;
double Account::secondInterestRate = 1;
