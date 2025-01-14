#include "Bank.hpp"
#include <iostream>
#include <cstddef>

using namespace std;

void Bank::createAccount(string accountNo, double bal) {
  BankAccount account(accountNo, bal);
  accounts.push_back(account);
}

BankAccount* Bank::findAccount(string accountNo) {
  for (int i = 0; i < accounts.size(); i++) {
    BankAccount* account = &accounts.at(i);
    if (account->getAccountNumber() == accountNo) {
      return account;
    }
  }
  return nullptr;
}

int Bank::transferAccount(BankAccount* srcAccount, BankAccount* dstAccount, double amount) {
  BankAccount* accountSrc = findAccount(srcAccount->getAccountNumber());
  BankAccount* accountDst = findAccount(dstAccount->getAccountNumber());

  if (accountSrc == nullptr || accountDst == nullptr) {
    return 2;
  }

  else if (accountSrc->getBalance() >= amount) {
    accountSrc->setBalance(accountSrc->getBalance() - amount);
    accountDst->setBalance(accountDst->getBalance() + amount);

    return 1;
  }

  else {  // accountSrc does not have enough funds for the transfer
    return 3;
  }
}



