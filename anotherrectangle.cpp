#include <iostream>
using namespace std;

class Rectangle{
  int width, height;
public:
  void setvalue(int w, int h){
    width = w;
    height = h;
    displayvalue();
  }
  void displayvalue(){
    cout<<"Width:"<<width<<endl<<"Height:"<<height<<endl;
  }
};

int main(){
  Rectangle r1;
  r1.setvalue(1,1);
}
