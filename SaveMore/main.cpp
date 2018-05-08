//  main.cpp
//  SaveMore
//
//  Created by Rheonda Ogletree on 4/27/18.
//  Copyright © 2018 Rheonda Ogletree. All rights reserved.
//

#include <iostream>
#include "Checking.h"
#include "CertDeposit.h"
#include "Savings.h"

void menu();

using namespace std;

int main()
{
    int num;
    
    BankAccount **bptr = NULL; //create a pointer to the BankAccount base
    char
    Savings *sptr = NULL;      // create object of the derived types
    Checking *cptr = NULL;
    CertDeposit *dptr = NULL;
    
    
    menu();
    
    
    for (int i = 0; i < num; i++)
    {
        ptr[i]->display();
    }
 
    
}

void menu()
{
    //char option = '0';
    int value;
    
    cout << "Enter you Account Number:" << endl;
    cin >> value;
    cout << " MENU " << endl;
    cout << "Press 0 to view your Account Information" << endl;
    cout << "Press 1 for Deposit" << endl;
    cout << "Press 2 for Withdrawl" << endl;
}

void gone(int num) // cleans up memory
{
    for (int i = 0; i < num; i++)
    {
        delete[] ptr;
    }
}
