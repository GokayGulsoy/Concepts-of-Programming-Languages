#include <iostream>
#include "Bank.hpp"

using namespace std;

int main() {
  Bank bank;
  // creating three bank accounts
  bank.createAccount("1001", 5000);
  bank.createAccount("1002", 3000);
  bank.createAccount("1003", 2000);
  
  // testing deposit method
  BankAccount* acc1 = bank.findAccount("1001");
  cout << "Before depositing $1000 into acc1, account balance is: " << acc1->getBalance() << "$" << endl; 
  
  acc1->deposit(1000);
  cout << "After depositing $1000 into acc1, account balance is: " << acc1->getBalance() << "$" << endl;

  // testing withdraw method 
  BankAccount* acc2 = bank.findAccount("1002");
  cout << "\nBefore withdrawing $500 from acc2, account balance is: " << acc2->getBalance() << endl;

  acc2->withdraw(500); 
  cout << "After withdrawing $500 from acc2, account balance is: " << acc2->getBalance() << endl;

  int result = bank.transferAccount(acc1, acc2, 1000);
  if (result == 1) {
   cout << "\nTransfer is successful" << endl;
   cout << "After transfer acc1 (source) has new balance of: " << acc1->getBalance() << "$" << endl;
   cout << "After transfer acc2 (destination) has new balance of: " << acc2->getBalance() << "$" << endl;
  }

  else if (result == 2) {
    cout << "\nOne or both accounts to be involved in transfer not found" << endl;
  }

  else {
    cout << "\nInsufficient funds to complete the transfer" << endl;
  }

  return 0;
}

