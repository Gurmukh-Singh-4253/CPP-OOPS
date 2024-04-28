// create 2 classes mammals and marineanimals. Create another class named BlueWhale which inherits both the classes. Now create a function in each of these classes which prints, "I am a mammal","I am a Marine Animal", "I belong to both Mammals and Marine Animals", respectively. Now create an object for each of the classes and try calling 
// Function of mammals by the object of mammals
// Function of marine animal by the object of marind animal 
// All the Functions of the Object of Blue Whale

#include <iostream>
using namespace std;

class Mammals{
  public: 
  void display1(){
    cout<< "I am a Mammal"<<endl;
  }
};

class Marineanimals{
  public: 
  void display2(){
    cout<< "I am a Marine Animal"<<endl;
  }
};

class BlueWhale: public Mammals, public Marineanimals{
  public: 
  void display3(){
    cout<< "I belong to both mammals and marine animals"<<endl;
  }
};

int main(){
  Mammals m1;
  Marineanimals m2;
  BlueWhale b1;
  m1.display1();
  m2.display2();
  b1.display1();
  b1.display2();
  b1.display3();
}
