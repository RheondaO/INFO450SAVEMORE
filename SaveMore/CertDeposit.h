//
//  CertDeposit.hpp
//  SaveMore
//
//  Created by Rheonda Ogletree on 5/7/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.

#pragma once
#include "BankAccount.h"
#include <stdio.h>

class CertDeposit : public BankAccount
{
public:
    CertDeposit();
    CertDeposit(int r, double b, int n);
    
    int withdraw(double balance);
    int deposit(double balance);
    int assessInterest(double balance);
    
    void display(double balance, int interestRate);
};
