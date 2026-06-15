#include<iostream>
#include<string>
using namespace std;

//a program to check balance that run on an atm machine, deposit, withdraws money and exit
class details {
public:
  string name;
  string customerId;
  double balance;
  string transactionType;
  double transactionValue;
};

void balanceFn (details &detail) {
detail.balance = 20000.00;
  if(detail.transactionType == "1"){
        if (detail.transactionValue <= detail.balance){
      detail.balance -= detail.transactionValue;
      cout<<"your balance is:"<<detail.balance<<endl;
    }
    else{
      cout<<"wacha mchezo"<<" "<<detail.name<<endl;
    }
  }
  else if(detail.transactionType == "2"){
    detail.balance += detail.transactionValue;
    cout<<"your balance is:"<<detail.balance<<endl;
  }
  else{
    cout<<"invalid choice"<<endl;
  }

}

int main () {
details detail; // the object instance to store the individual details using the class as its template
  detail.balance = 20000.00;

  cout<<"please enter your name and id number"<<endl;
  getline(cin, detail.name);
  getline(cin, detail.customerId);

  cout<<"your name is:"<<detail.name<<"and id:"<<detail.customerId<<endl;
  cout<<"please"<<""<<detail.name<<"choose your transaction type"<<endl;
  cout<<"enter 1 to withdraw or 2 to deposit"<<endl;
  getline(cin, detail.transactionType);
  cout<<"transaction amount"<<endl;
  cin>>detail.transactionValue;


balanceFn (detail);
  return 0;
}
