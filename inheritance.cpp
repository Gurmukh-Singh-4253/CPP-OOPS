#include <iostream>
using namespace std;

class Animal{
  int legs = 4;
public:
  void display(){
    cout<<"\nlegs="<<legs;
  }
};

class Dog: public Animal{
  bool tail = true;
public:
  void display2(){
    cout<<"\ntail="<<tail;
  }
};

int main(){
  Dog d1;
  d1.display();
  d1.display2();
}
