#include <string>
#include <iostream>

using namespace std;

class BankAccount {
  private:
    string accountNumber;
    double balance;

    class Transaction {
      public:
        void deposit(BankAccount* bankAccount, double amount);
        void withdraw(BankAccount* bankAccount, double amount);
    };

  public:
    BankAccount(string accountNo, double bal);
    string getAccountNumber();
    double getBalance();
    void setAccountNumber(string accountNumber);
    void setBalance(double balance);
    void displayBalance();
    void deposit(double amount);
    void withdraw(double amount);
};
