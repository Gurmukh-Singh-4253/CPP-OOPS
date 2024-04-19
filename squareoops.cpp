// find the area of a square using constructor overloading

#include <iostream>
using namespace std;

class Square{
  int side;
public:
  Square(){
    side = 0;
  }
  Square(int n){
    side = n;
  }
  int area(){
    return side*side;
  }
};

int main(){
  Square s1(4);
  cout<<s1.area()<<endl;
}
