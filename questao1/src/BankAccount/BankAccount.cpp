#include "./BankAccount.hpp"

#include <iostream>
#include <string>

int BankAccount::getNumber() { return number; }

string BankAccount::getOwnerName() { return ownerName; }

float BankAccount::getBalance() { return balance; }

void BankAccount::setBalance(float value) { balance = value; }

void BankAccount::deposit(float value) { setBalance(balance + value); }

void BankAccount::withdraw(float value) {
  float accBalance = getBalance();
  accBalance -= value;

  if (accBalance < 0)
    accBalance = 0;

  balance = accBalance;
}

void BankAccount::showBalance() {
  cout << "Account Balance: " << getBalance() << endl;
}
