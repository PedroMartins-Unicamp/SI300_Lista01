#ifndef _BANK_ACCOUNT_H
#define _BANK_ACCOUNT_H

#include <string>

using namespace std;

class BankAccount {
private:
  int number;
  string ownerName;
  float balance;

public:
  int getNumber();

  string getOwnerName();
  void setOwnerName(string name);

  float getBalance();
  void setBalance(float value);

  void deposit(float value);
  void withdraw(float value);
  void showBalance();
};
#endif
