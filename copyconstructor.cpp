// create a class distance having data members feet and inch. create parameterized constructors to initiealize members feet and inch. 
// create a class rectangle having data members length and width. demonstrate default, parameterised and copy constructor to initialize numbers.
#include <iostream>
using namespace std;

class Rectangle{
  int length, width;
public:
  Rectangle(){
    length = 0; 
    width = 0;
  }
  Rectangle(int l, int w){
    length = l;
    width = w;
  }
  Rectangle(Rectangle & r){
    length = r.length;
    width = r.width;
  }
  void display(){
    for(int i = 0; i<length; i++){
      for(int j = 0; j<2*width; j++){
        // if(i==0 || i==length-1 || j<=1 || j>=2*width-2){
          cout<<"█";
        // }
        // else cout<<" ";
      }
      cout<<endl;
    }
  }
};


int main(){
  Rectangle r1, r2(3,4);
  Rectangle r3 = r2;
  r1.display();
  cout<<endl;
  r2.display();
  cout<<endl;
  r3.display();
  cout<<endl;
}
