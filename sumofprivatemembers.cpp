#include <iostream>
using namespace std;

class ABC;
class XYZ;

class ABC{
  int num1;
public:
  void gethello(){
    cin>>num1;
  }
  friend int add(ABC,XYZ);
};

class XYZ: public ABC{
  int num2;
  friend int add(ABC,XYZ);
public:
  void gethello(){
    cin>>num2;
  }
};

int add(ABC a ,XYZ z){
  return a.num1+z.num2;
}

int main(){
  ABC a;
  XYZ z;
  a.gethello();
  z.gethello();
  cout<< add(a,z)<< endl;
}
