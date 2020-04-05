#include <iostream>
#include <string>
#include "Account.h"
#include "Client.h"

using namespace std;

int main() {

    Account::SetFirstInterestRate(30);
    Account::SetSecondInterestRate(10);

    Client client(1500);
    client.CreateFirstSavings(6);
    cout << "This is the balance for your first savings: " << client.GetBalance() << "\n" << endl;


    Client client2(1500);
    client.CreateSecondSavings(12);
    cout << "This is the balance for your second savings: " << client.GetBalance() << endl;
}