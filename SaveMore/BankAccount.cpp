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
    interestRate = 0.0;
    acctNumber = 00000;
    balance = 0;
}

BankAccount::BankAccount(float r, double b, int n)
{
    interestRate = r;
    acctNumber = 0;
    balance = b;
}

void BankAccount::setAcctNumber(int acctNumber)
{
    cin >> acctNumber;
}

int BankAccount::withdraw(double balance)
{
    int amount;
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

int BankAccount::deposit(double balance)
{
    int amount;
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

void setAcctNumber(int acctNumber)
{
    cout << "Enter New Account Number" << endl;
    cin >> acctNumber;
    
    //ptr[i] = new BankAccount();
}
