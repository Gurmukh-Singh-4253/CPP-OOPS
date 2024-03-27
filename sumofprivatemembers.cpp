#include <iostream>
using namespace std;

class ABC;
class XYZ;

class ABC{
  int hello;
public:
  void gethello(){
    cin>>hello;
  }
  friend int add(ABC,XYZ);
};

class XYZ: public ABC{
  int hello;
  friend int add(ABC,XYZ);
};

int add(ABC a ,XYZ z){
  return a.hello+z.hello;
}

int main(){
  ABC a;
  XYZ z;
  a.gethello();
  z.gethello();
  cout<< add(a,z)<< endl;
}
