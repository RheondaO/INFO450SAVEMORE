//
//  BankAccount.h
//  SaveMore
//
//  Created by Rheonda Ogletree on 4/27/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//
#pragma once
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class BankAccount
{
    
protected:
    float interestRate;
    double checkOrder;
    double balance;
    int acctNumber;
    
public:
    BankAccount();
    BankAccount(float r, double b, int n);
    
    virtual int withdraw(double balance); //pure virtual because there is
    virtual int deposit(double balance); //different process for each account
    //virtual int assessInterest();
    
    virtual void display();
    
    void setAcctNumber(int acctNumber);
};
