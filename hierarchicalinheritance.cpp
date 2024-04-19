#include <iostream>
using namespace std;

class Animal{
public:
  void display1(){
    cout<<"animal class"<<endl;
  }
};
class Elephant: public Animal{
public:
  void display2(){
    cout<<"Animal class"<<endl;
  }
};
class Horse: public Animal{
public:
  void display3(){
    cout<<"Horse class"<<endl;
  }
};
class Cow: public Animal{
public:
  void display4(){
    cout<<"Cow class"<<endl;
  }
};

int main(){
  Animal a;
  Elephant e;
  Horse h;
  Cow c;
  a.display1();
  e.display2();
  e.display1();
  h.display3();
  h.display1();
  c.display4();
  c.display1();
}
