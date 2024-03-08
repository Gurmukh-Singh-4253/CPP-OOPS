// define a class rectangle with members width and height. also define function to set values to initialize the members, area to calculate area.
#include <iostream>
using namespace std;

class Rectangle{
  int width, height;
public:
  void setvalues(){
    cout<<"Enter Width:";
    cin>> width;
    cout<<"Enter Height:";
    cin>> height;
  }
  int area(){
    return width*height;
  }
};

int main(){
  Rectangle r1;
  r1.setvalues();
  cout<<"Area:"<<r1.area()<<endl;
}
