#include "./headers/Account.h"
#include "./headers/Bank.h"

using namespace std;


Account::Account(string fname, string lname, float balance) {
    NextAccountNumber++;
    accountNumber = NextAccountNumber;
    firstName = fname;
    lastName = lname;
    this->balance = balance; // Use `this` to differentiate
}

void Account::Deposit(float amount)
{
 balance+=amount;
}

void Account::Withdraw(float amount)
{
 if(balance-amount<MIN_BALANCE)
 throw InsufficientFunds();
 balance-=amount;
}

void Account::setLastAccountNumber(long accountNumber)
{
 NextAccountNumber=accountNumber;
}

long Account::getLastAccountNumber()
{
 return NextAccountNumber;
}


Account Bank::OpenAccount(string fname,string lname,float balance)
{
 ofstream outfile;
 Account account(fname,lname,balance);
 accounts.insert(pair<long,Account>(account.getAccNo(),account));

 outfile.open("Bank.data", ios::trunc);

 map<long,Account>::iterator itr;
 for(itr=accounts.begin();itr!=accounts.end();itr++)
 {
 outfile<<itr->second;
 }
 outfile.close();
 return account;
}

Account Bank::BalanceEnquiry(long accountNumber)
{
 map<long,Account>::iterator itr=accounts.find(accountNumber);
 return itr->second;
}

Account Bank::Deposit(long accountNumber,float amount)
{
 map<long,Account>::iterator itr=accounts.find(accountNumber);
 itr->second.Deposit(amount);
 return itr->second;
}

Account Bank::Withdraw(long accountNumber,float amount)
{
 map<long,Account>::iterator itr=accounts.find(accountNumber);
 itr->second.Withdraw(amount);
 return itr->second;
}


ofstream & operator<<(ofstream &ofs,Account &acc)
{
 ofs<<acc.accountNumber<<endl;
 ofs<<acc.firstName<<endl;
 ofs<<acc.lastName<<endl;
 ofs<<acc.balance<<endl;
 return ofs;
}

ifstream & operator>>(ifstream &ifs,Account &acc)
{
 ifs>>acc.accountNumber;
 ifs>>acc.firstName;
 ifs>>acc.lastName;
 ifs>>acc.balance;
 return ifs;
}

ostream & operator<<(ostream &os,Account &acc)
{
 os<<"First Name : "<<acc.getFirstName()<<endl;
 os<<"Last Name : "<<acc.getLastName()<<endl;
 os<<"Account Number : "<<acc.getAccNo()<<endl;
 os<<"Balance : "<<acc.getBalance()<<endl;
 return os;
}