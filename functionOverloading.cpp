// write a program area of a triangle and rectangle by function overloading
#include <iostream>
#include <math.h>
using namespace std;

class Area{
public:
  float area();
};

class Rectangle: public Area{
  float l,b;
public:
  Rectangle(){
    cin>>l>>b;
  }
  float area(){
    return l*b;
  }
};

class Triangle: public Area{
  float x,y,z;
public:
  Triangle(){
    cin>>x>>y>>z;
  }
  float area(){
    float s = (x + y + z)/2;
    return pow(s*(s-x)*(s-y)*(s-z),0.5);
  }
};

int main(){
  Triangle t1;
  Rectangle r1;
  cout<<"The Area of the triangle is :"<<t1.area();
  cout<<"The Area of the rectangle is :"<<r1.area();
}
