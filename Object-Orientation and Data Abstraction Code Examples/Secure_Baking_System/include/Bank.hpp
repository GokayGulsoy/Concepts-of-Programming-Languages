#include <vector>
#include "BankAccount.hpp"

class Bank {
  private:
    vector<BankAccount> accounts;
  public:
    void createAccount(string accountNo, double bal);
    BankAccount* findAccount(string accountNo);
    int transferAccount(BankAccount* srcAccount, BankAccount* dstAccount, double amount);
};


