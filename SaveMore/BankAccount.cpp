//  BankAccount.cpp
//  SaveMore
//
//  Created by Rheonda Ogletree on 4/27/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//

#include "BankAccount.h"
#include <iostream>

int value;

using namespace std;

BankAccount::BankAccount() //BankAccount Default Constructor
{
    interestRate = 0;
    acctNumber = "";
    balance = 12006;
}

BankAccount::BankAccount(int r, double b, string n)
{
    interestRate = r;
    acctNumber = "";
    balance = b;
}

void BankAccount::setAcctNumber(int acctNumber)
{
    cin >> acctNumber;
}

int BankAccount::withdraw(int amount)
{
    cin >> amount;
    
    if (balance >= amount)
    {
        balance -= amount;
        
        return 0;
    }
    else
    {
        cout << "Insufficient Funds" << endl;
        cout << "Your Current Balance is " << balance << endl;
        
        return -1;
    }
}

int BankAccount::deposit(int amount)
{
    cin >> amount;
    balance += amount;
    
    return 0;
}

void BankAccount::display()
{
cout << endl;
cout << "Account Number: " << acctNumber << endl;
cout << "Account Balance: " << balance << endl;
cout << "Interest Rate: " << interestRate << endl;
cout << endl;
}
