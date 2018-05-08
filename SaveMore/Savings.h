//  Savings.h
//  SaveMore
//
//  Created by Rheonda Ogletree on 4/27/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//

#include "BankAccount.h"
#include <iostream>

const int FEE = 2;

class Savings : public BankAccount
{
public:
    Savings(); //default Constructor
    Savings(int r, double b, string n);
    
    int withdraw(int amount);
    int deposit(int amount);
    int assessInterest(int amount);
    
    void display();
    
};
