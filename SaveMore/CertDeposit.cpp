//
//  CertDeposit.cpp
//  SaveMore
//
//  Created by Rheonda Ogletree on 5/7/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//

#include "CertDeposit.h"
#include <iostream>

using namespace std;

CertDeposit::CertDeposit()
{
    interestRate = 0;
    balance = 8200;
}

CertDeposit::CertDeposit(int r, double b, int n)
    : BankAccount(r, b, n)
{
    interestRate = r;
    balance = b;
    
}

int CertDeposit::withdraw(double balance)
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
        cout << "Your Current Balance is " << balance << endl;\
        
        return -1;
    }
}

int CertDeposit::deposit(double balance)
{
    int amount;
    cin >> amount;
    balance += amount;
    
    return 0;
}

void CertDeposit::display(double balance, int interestRate)
{
    cout << "Available Balance: " << balance << endl;
}
