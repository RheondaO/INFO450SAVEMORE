//
//  Checking.h
//  SaveMore
//
//  Created by Rheonda Ogletree on 5/7/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//


#include "BankAccount.h"
#include <stdio.h>

const int FEE = 5;

class Checking : public BankAccount
{
    
private:
    double checkOrder;
public:
    Checking(); //Default Constructor
    Checking(int r, double b, string n, double o);
    
    int withdraw(int amount);
    int deposit(int amount);
    int OrderCheck(int amount);
    
    void display();
};
