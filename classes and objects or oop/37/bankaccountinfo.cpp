#include <string>
#include <iostream>
using namespace std;

class BankAccount{
  public:
  string name;
  int account_id;
  string account_type;
  double balance;

  double deposit(double x){
    balance = balance + x;
    return balance;
  }

  double withdraw(double x){
    balance = balance - x;
    return balance;
  }

  void display_balance(){
    cout<<"the current of the balance is: "<<balance<<endl;
  }
};

int main(){
  BankAccount myacc;
  myacc.account_id = 2006;
  myacc.account_type = "savings";
  myacc.name = "hussain";
  myacc.deposit(96);
  myacc.withdraw(25);
  myacc.display_balance();
}
