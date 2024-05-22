// Write a program to virtual funciton abstrat class function overriding.

#include <iostream>
using namespace std;

class Fruits{
public:
  virtual void identify() = 0;
};

class Mango: public Fruits{
public:
  void identify(){
    cout<<"I am a Mango"<<endl;
  }
};

class Pineapple: public Fruits{
public:
  void identify(){
    cout<<"I am a Pineapple"<<endl;
  }
};

class Grapefruit: public Fruits{
public:
  void identify(){
    cout<<"I am a Grapefruit"<<endl;
  }
};

int main(){
  Mango M;
  Pineapple P;
  Grapefruit G;
  M.identify();
  P.identify();
  G.identify();
}
