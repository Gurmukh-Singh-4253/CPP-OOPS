#include <iostream>
using namespace std;

// class Derived is derived from class Base, making it single inheritance
class Base1{
public:
  int x;
  Base1(){
     x = 15;
  }
};

class Base2{
public:
  int x;
  Base2(){
     x = 10;
  }
};

class Derived: public Base1{
public:
};

//when we derive another class from class Derived, it makes it a multi level inheritance
class Derived2: public Derived{
public:
  Derived2(){
    x = 20;
  }
};

//if we derive another class from the Base1 class, 2 classes have beed derived from class Base hence multiple inheritance is demonstrated
class Derived3: public Base1,Base2 {
public:
  Derived3(){
    Base1::x = 30;
  }
};

//since we are applying different inheritances simultaneously, this also serveds as an example of hybrid inheritance
int main(){
  Derived d;
  Derived2 d2;
  Derived3 d3;
  cout<<d.x<<endl;
  cout<<d2.x<<endl;
  cout<<d3.x<<endl; }
