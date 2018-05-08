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
    interestRate = 0;
    balance = 5000;
    checkOrder = 0;
}

Checking::Checking(int r, double b, int n, double o)
    : BankAccount(r, b, n)
{
    interestRate = r;
    balance = b;
    checkOrder = o;
}

int Checking::withdraw()
{
    int amount;
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
            balance -= CFEE;
        }
        
        return 0;
    }
    else
    {
        cout << "Insufficient Funds" << endl;
        cout << "Your Current Balance is " << balance << endl;
        
        return -1;
    }
}

int Checking::deposit()
{
    cout << "Checking Accout Deposit" << endl;
    cout << "-----------------------" << endl;
    cout << endl;
    
    int amount;
    cout << "How much would you like to deposit" << endl;
    
    cin >> amount;
    balance += amount;
    
    cout << "New Account Balance:" << balance << endl;
    
    return 0;
}

int Checking::orderCheck()
{
    int amount;
    int checkFee = 15;
    if (balance >= amount)
    {
    cout << "Enter Check Amount: " << endl;
    cout << "Ordering A Check will deduct a fee of $15" << endl;
    cin >> checkOrder;
        
        balance -= checkOrder;
        balance -= checkFee;
        return 0;
    }
    else
    {
        cout << "Insufficient Funds" << endl;
        cout << "Your Current Balance is " << balance << endl;
        
        return -1;
    }
}

void Checking::display()
{
    cout << "Available Balance: " << balance << endl;
}
