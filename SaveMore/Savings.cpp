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
    interestRate = 0.01*100;
    balance = 5000;
}

Savings::Savings(float r, double b, int n)
    : BankAccount(r, b, n)
{
    interestRate = r;
}

int Savings::assessInterest(double newBalance)
{
    if (balance < 10000)
    {
        interestRate = 0.01*100;
        
        newBalance = balance*interestRate;
        
        return newBalance;
    }
    else
    {
        interestRate = 0.02*100;
        newBalance = balance*interestRate;
        
        return newBalance;
    }
}
int Savings::withdraw();
{
    int amount;
    cin >> amount;
    
    if (newBalance >= amount)
    {
        newBalance -= amount;
        newBalance -= SFEE;
    
        return 0;
    }
    else
    {
        cout << "Insufficient Funds" << endl;
        cout << "Your Current Balance is " << newBalance << endl;
    }
        return -1;
}

int Savings::deposit()
{
    int amount;
    cin >> amount;
    balance += amount;
    
    return 0;
}

void Savings::display()
{
    cout << "Available Balance: " << balance << endl;
    cout << "Current Interest Rate: " << interestRate << "%" << endl;
}


