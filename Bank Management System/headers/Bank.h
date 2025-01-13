#ifndef BANK_H
#define BANK_H

#include<map>
#include "Account.h"

using namespace std;

class Bank
{
    private:
    map<long,Account> accounts;
    public:
    Bank();
    Account OpenAccount(string fname,string lname,float balance);
    Account BalanceEnquiry(long accountNumber);
    Account Deposit(long accountNumber,float amount);
    Account Withdraw(long accountNumber,float amount);
    void CloseAccount(long accountNumber);
    void ShowAllAccounts();
    ~Bank();
};

#endif // BANK_H