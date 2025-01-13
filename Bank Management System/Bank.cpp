#include "./headers/Account.h"
#include "./headers/Bank.h"

using namespace std;

Bank::Bank()
{

      Account account;
      ifstream infile;
      infile.open("Bank.data");

      if(!infile)
      {
            cout<<"Error in Opening! File Not Found!!"<<endl;
            return;
      }

      while(!infile.eof())
      {
            infile>>account;
            accounts.insert(pair<long,Account>(account.getAccNo(),account));
      }

      Account::setLastAccountNumber(account.getAccNo());

      infile.close();

}

void Bank::CloseAccount(long accountNumber)
{
      map<long,Account>::iterator itr=accounts.find(accountNumber);
      cout<<"Account Deleted"<<itr->second;
      accounts.erase(accountNumber);
}

void Bank::ShowAllAccounts()
{
      map<long,Account>::iterator itr;
      for(itr=accounts.begin();itr!=accounts.end();itr++)
      {
      cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
      }
}

Bank::~Bank()
{
      ofstream outfile;
      outfile.open("Bank.data", ios::trunc);

      map<long,Account>::iterator itr;
      for(itr=accounts.begin();itr!=accounts.end();itr++)
      {
      outfile<<itr->second;
      }
      outfile.close();
}