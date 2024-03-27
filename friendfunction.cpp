#include <iostream>
using namespace std;

class A{
  int balance;
public:
  A(){
    balance = 10;
  }
  friend void B(A);
};

void B(A x){
  cout<< x.balance<< endl;
}

int main(){
  A obj;
  B(obj);
}
