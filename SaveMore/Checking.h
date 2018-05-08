//
//  Checking.h
//  SaveMore
//
//  Created by Rheonda Ogletree on 5/7/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//
#pragma once
#include "BankAccount.h"
#include <stdio.h>

const int CFEE = 5;

class Checking : public BankAccount
{
protected:
    double checkOrder;
    
public:
    Checking(); //Default Constructor
    Checking(int r, double b, int n, double o);
    
    int withdraw();
    int deposit();
    int orderCheck();
    
    void display();
};
