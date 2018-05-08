//  Savings.cpp
//  SaveMore
//
//  Created by Rheonda Ogletree on 4/27/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//

#include "Savings.h"
#include <iostream>

using namespace std;

Savings::Savings() //default constructor
{
    interestRate = 0;
}

Savings::Savings(int r, double b, string n)
    : BankAccount(r, b, n)
{
    interestRate = 0;
}

int Savings::withdraw(int amount)
{
    cin >> amount;
    
    if (balance >= amount)
    {
        balance -= amount;
        balance -= FEE;
    
        return 0;
    }
    else
    {
        cout << "Insufficient Funds" << endl;
        cout << "Your Current Balance is " << balance << endl;
    }
        return -1;
}

int Savings::deposit(int amount)
{
    cin >> amount;
    balance += amount;
    
    return 0;
}
