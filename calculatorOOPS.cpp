#include <iostream>
using namespace std;

class Operator{
  public:
    int num1,num2;

    int addition(){
      return num1+num2;
    }
    int substraction(){
      return num1-num2;
    }
    int multiplication(){
      return num1*num2;
    }
    float division(){
      return float(num1)/float(num2);
    }
    int modulus(){
      return num1%num2;
    }

};

int main(){
  Operator ops;
  cin>> ops.num1;
  cin>> ops.num2;
  cout<<"Sum:"<<ops.addition()<<endl;
  cout<<"Difference:"<<ops.substraction()<<endl;
  cout<<"Product:"<<ops.multiplication()<<endl;
  cout<<"Quotient:"<<ops.division()<<endl;
  cout<<"Remainder:"<<ops.modulus()<<endl;
}
