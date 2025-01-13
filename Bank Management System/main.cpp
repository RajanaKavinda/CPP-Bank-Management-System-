#include "headers/Account.h"
#include "headers/Bank.h"
#include <iostream>
#include <limits>
#include <conio.h>
using namespace std;

long Account::NextAccountNumber=0;
void printMenu();

int main()
{
   Bank b;
   Account acc;

   int choice;
   string fname,lname;
   long accountNumber;
   float balance;
   float amount;
   
   do
   {
      system("cls");
      printMenu();
      cin>>choice;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << endl;

      switch(choice)
      {
      case 1:
         cout<<"Enter First Name: ";
         cin>>fname;
         cout<<"Enter Last Name: ";
         cin>>lname;
         cout<<"Enter initil Balance: ";
         cin>>balance;
         acc=b.OpenAccount(fname,lname,balance);
         cout<<endl<<"Congradulation Account is Created"<<endl;
         cout<<acc;
         _getch();
         break;
      case 2:
         cout<<"Enter Account Number:";
         cin>>accountNumber;
         acc=b.BalanceEnquiry(accountNumber);
         cout<<endl<<"Your Account Details"<<endl;
         cout<<acc;
         _getch();
         break;
      case 3:
         cout<<"Enter Account Number:";
         cin>>accountNumber;
         cout<<"Enter Balance:";
         cin>>amount;
         acc=b.Deposit(accountNumber, amount);
         cout<<endl<<"Amount is Deposited"<<endl;
         cout<<acc;
         _getch();
         break;
      case 4:
         cout<<"Enter Account Number:";
         cin>>accountNumber;
         cout<<"Enter Balance:";
         cin>>amount;
         acc=b.Withdraw(accountNumber, amount);
         cout<<endl<<"Amount Withdrawn"<<endl;
         cout<<acc;
         _getch();
         break;
      case 5:
         cout<<"Enter Account Number:";
         cin>>accountNumber;
         b.CloseAccount(accountNumber);
         cout<<endl<<"Account is Closed"<<endl;
         cout<<acc;
         _getch();
         break;
      case 6:
         b.ShowAllAccounts();
         _getch();
         break;

      case 7: break;
      default:
         cout<<"\nEnter corret choice";
         exit(0);
      }
   }while(choice!=7);

   return 0;
}

void printMenu()
{
   cout<<"***Banking System***"<<endl;
   cout<<"\n\tSelect one option below ";
   cout<<"\n\t1 Open an Account";
   cout<<"\n\t2 Balance Enquiry";
   cout<<"\n\t3 Deposit";
   cout<<"\n\t4 Withdrawal";
   cout<<"\n\t5 Close an Account";
   cout<<"\n\t6 Show All Accounts";
   cout<<"\n\t7 Quit";
   cout<<"\n";
   cout<<"\nEnter your choice: ";
}