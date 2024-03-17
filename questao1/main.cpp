#include "src/BankAccount/BankAccount.hpp"

int main(void) {
  BankAccount bk1 = BankAccount();

  bk1.showBalance();

  bk1.deposit(50.5);
  bk1.showBalance();

  bk1.withdraw(12.5);
  bk1.showBalance();

  bk1.withdraw(100);
  bk1.showBalance();

  return 0;
}
