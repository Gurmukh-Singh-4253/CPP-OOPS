#include <iostream>
using namespace std;

class Shape{
public:
  void print(){ 
    cout<<"This is a shape."<<endl; 
  }
};

class Polygon: public Shape{
public:
  void print(){ 
    cout<<"Polygon is a Shape"<<endl; 
  }
};

class Rectangle:public Polygon{
public:
  void print(){ 
    cout<<"Rectangle is a Polygon"<<endl; 
  }
};

class Triangle:public Polygon{
public:
  void print(){ 
    cout<<"Triangle is a Polygon"<<endl; 
  }
};

class Square: public Rectangle{
public:
  void print(){ 
    cout<<"Square is a Rectangle"<<endl; 
  }
};

int main(){
  Shape s;
  Polygon p;
  Triangle t;
  Rectangle r;
  Square q;
  s.print();
  p.print();
  t.print();
  r.print();
  q.print();
}
