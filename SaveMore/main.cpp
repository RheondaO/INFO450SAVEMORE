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
    int acctNumber = 1234;
    
    Checking *cptr = NULL;
    Savings *sptr = NULL;
    CertDeposit *dptr = NULL;
    
    cptr = new Checking[acctNumber];
    sptr = new Savings[acctNumber];
    dptr = new CertDeposit[acctNumber];
    
    
    
    
    delete [] cptr;
    delete [] sptr;
    delete [] dptr;
    
    BankAccount **ptr = NULL;
    char answer;
   
    
    ptr = new BankAccount*[acctNumber];
    
    for (int i = 0; i < acctNumber; i++)
    {
        cout << "Welcome!" << endl;
        cout << "Do you have an Existing Account? (Y or N)" << endl;
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            menu();
        }
        else
        {
            BankAccount newAcct;
            newAcct.setAcctNumber(acctNumber);
            
            menu();
        }
    }
    
    return 0;
}

void menu()
{
    int option;
    int value;
    
    
    cout << "Enter you Account Number:" << endl;
    cin >> value;
    cout << endl;
    cout << " MENU " << endl;
    cout << "Press 1 for Checking" << endl;
    cout << "Press 2 for Savings" << endl;
    cout << "Press 3 for Certificate of Deposit" << endl;
    
    cin >> option;
    
    BankAccount acctB;
    Checking acctC;
    Savings acctS;
    CertDeposit acctD;
    
    
    switch(option)
    {
        case 1: //Checking Account
        {
            cout << "Press 1 to view Account Balance" << endl;
            cout << "Press 2 for Deposits" << endl;
            cout << "Press 3 for Withdrawl" << endl;
            cout << "Press 4 for Check Order" << endl << endl;
            
            cin >> option;
            
            switch (option)
            {
                case 1: //Selected to Display Checking Account Balance
                {
                    acctC.display();
                }
                case 2: //Selected for Deposits
                {
                    acctC.deposit();
                }
                case 3: //Selected for Withdrawl
                {
                    acctC.withdraw();
                }
                case 4: //Selected for Ordering checks
                {
                    acctC.orderCheck();
                }
            }
            
        case 2: //Savings Account
            {
                cout << "Press 1 to view Account Balance" << endl;
                cout << "Press 2 for Deposits" << endl;
                cout << "Press 3 for Withdrawl" << endl;
                
                cin >> option;
                
                switch (option)
                {
                    case 1: //Selected to Display Checking Account Balance
                    {
                        acctS.display();
                    }
                    case 2: //Selected for Deposits
                    {
                        acctS.deposit();
                    }
                    case 3: //Selected for Withdrawl
                    {
                        acctS.withdraw();
                    }
                }
                
            }
        }
        //case 2: //Checking Account Options
    }
}
/*
void gone(int num) // cleans up memory
{
    for (int i = 0; i < num; i++)
    {
        delete[] ptr;
    }
}
*/
