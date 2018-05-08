//
//  BankAccount.h
//  SaveMore
//
//  Created by Rheonda Ogletree on 4/27/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class BankAccount
{
    
protected:
    int interestRate;
    double balance;
    string acctNumber;
    
public:
    BankAccount();
    BankAccount(int r, double b, string n);
    
    virtual int withdraw(int amount); //pure virtual because there is
    virtual int deposit(int amount); //different process for each account
    //virtual int assessInterest();
    
    virtual void display();
    
    void setAcctNumber(int acctNumber);
};
