#include <iostream>
using namespace std;

class Person{
public:
  void display1(){
    cout<<"Person class"<<endl;
  }
};

class Student: public Person{
public:
  void display2(){
    cout<<"Student class"<<endl;
  }
};

class ITStudent: public Student{
public:
  void display3(){
    cout<< "ITStudent"<<endl;
  }
};

int main(){
  Person p;
  Student s;
  ITStudent i;
  p.display1();
  s.display2();
  s.display1();
  i.display1();
  i.display2();
  i.display3();
}
