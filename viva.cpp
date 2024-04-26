// wap to make a calculator using the concept of copy consturctor.
#include <iostream>
using namespace std;

class Calculator{
  int n1,n2;
public:
  Calculator(){
    cout<<"Enter the first number:";
    cin>> n1;
    cout<<"Enter the second number:";
    cin>> n2;
  }
  Calculator(Calculator & x){
    n1 = x.n1;
    n2 = x.n2;
  }
  int sum(){
    return n1+n2;
  }
  int diff(){
    return n1-n2;
  }
  int prod(){
    return n1*n2;
  }
  int quot(){
    return n1/n2;
  }
  int rem(){
    return n1%n2;
  }
};

int main(){
  Calculator c1;
  Calculator c2(c1);
  cout<<"Sum:"<<c2.sum()<<endl;
  cout<<"Diff:"<<c2.diff()<<endl;
  cout<<"Product:"<<c2.prod()<<endl;
  cout<<"Quotient:"<<c2.quot()<<endl;
  cout<<"Remainder:"<<c2.rem()<<endl;
}
