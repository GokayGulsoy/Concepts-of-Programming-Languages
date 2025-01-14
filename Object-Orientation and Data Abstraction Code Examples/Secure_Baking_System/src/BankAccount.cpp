#include "BankAccount.hpp"

using namespace std;

// methods of BankAccount class
BankAccount::BankAccount(string accountNo, double bal) {
  accountNumber = accountNo;
  balance = bal;
}

string BankAccount::getAccountNumber() {
  return accountNumber;
}

double BankAccount::getBalance() {
  return balance;
}

void BankAccount::setAccountNumber(string accountNo) {
  accountNumber = accountNo;
}

void BankAccount::setBalance(double bal) {
  balance = bal;
}

void BankAccount::displayBalance() {
  cout << "Account Balance is: " << balance << endl;
}

void BankAccount::deposit(double amount) {
  Transaction trans;
  trans.deposit(this, amount);
}

void BankAccount::withdraw(double amount) {
  Transaction trans;
  trans.withdraw(this, amount);
}

// methods of Nested class Transaction
void BankAccount::Transaction::deposit(BankAccount* bankAccount, double amount) {
  double currentBalance = bankAccount->getBalance();
  currentBalance += amount;
  bankAccount->setBalance(currentBalance);
}

void BankAccount::Transaction::withdraw(BankAccount* bankAccount, double amount) {
  double currentBalance = bankAccount->getBalance();
  if(currentBalance >= amount) {
    currentBalance -= amount;
    bankAccount->setBalance(currentBalance);
  }
}
