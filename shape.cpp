// Write a cpp program to calculate the area of reactangle and triangle using the concept of abstract class

#include <iostream>

class Shape{
public: 
  float x,y;
  virtual float area() = 0;
};

class Rectangle: public Shape{
public:
  Rectangle(){
    cin>>x>>y;
  }
  float area(){
    return x*y;
  }
};

class Triangle: public Shape{
public:
  Triangle(){
    cin>>x>>y;
  }
  float area(){
    return 0.5*x*y;
  }
};

int main(){
  Rectangle r;
  Triangle t;
  cout<<"The Area of the rectangle is "<< r.area()<<endl;
  cout<<"The Area of the triangle is "<< t.area()<<endl;
}
