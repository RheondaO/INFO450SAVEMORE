//  Savings.h
//  SaveMore
//
//  Created by Rheonda Ogletree on 4/27/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//
#pragma once
#include "BankAccount.h"
#include <iostream>

const int SFEE = 2;

class Savings : public BankAccount
{
public:
    Savings(); //default Constructor
    Savings(float r, double b, int n);
    
    int assessInterest(double newBalance);
    int withdraw();
    int deposit();
    
    
    void display();
    
};
