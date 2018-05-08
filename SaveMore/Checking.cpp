//
//  Checking.cpp
//  SaveMore
//
//  Created by Rheonda Ogletree on 5/7/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//

#include "Checking.h"
#include <iostream>

using namespace std;

Checking::Checking() //Default Constructor
{
    double checkOrder = 0;
}

Checking::Checking(int r, double b, string n, double o)
    : BankAccount(r, b, n)
{
    double checkOrder = 0;
}

int Checking::withdraw(int amount)
{
    cin >> amount;
    
    if (balance >= amount)
    {
        if (balance >= 500)
        {
            balance -= amount;
        }
        else
        {
            balance -= amount;
            balance -= FEE;
        }
        
        return 0;
    }
    else
    {
        cout << "Insufficient Funds" << endl;
        cout << "Your Current Balance is " << balance << endl;
    }
    return -1;
}

int Checking::deposit(int amount)
{
    cin >> amount;
    balance += amount;
    
    return 0;
}

int Checking::OrderCheck(int amount)
{
    if (balance)
    cout << "Enter Check Amount: " << endl;
    cin >> checkOrder;
    
    return 0;
}
