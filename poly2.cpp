#include <iostream>

class Shape{
public:
  float x;
  void getdata(){
    cin>>x;
  }
  virtual float calculateArea() = 0;
};

class Square: public Shape{
public: 
  float calculateArea(){
    return x*x;
  }
};

class Circle: public Shape{
public: 
  float calculateArea(){
    return 3.14*x*x;
  }
};

int main(){
  Square s;
  Circle c;
  s.getdata();
  cout<<"Area of square: "<<s.calculateArea()<<endl;
  c.getdata();
  cout<<"Area of circle: "<<c.calculateArea()<<endl;
}
