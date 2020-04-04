//
// Created by Isuwa Joel on 04-Apr-20.
//
#pragma once

#include <string>
#include "Account.h"


using namespace std;

class Client:Account {
private:
  //  double accountInterestRate = 7.8;
public:
    string accountHolder;
    string accountType;

    Client(){}
    Client(double accountInterestRate, string accountType)
    {
        double accountInterestRate;
    }


};


