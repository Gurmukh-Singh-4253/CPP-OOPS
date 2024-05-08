#include <iostream>
using namespace std;

class Demo{
  int i;
public:
  Demo(int x){
    i = x; 
  }
  int getdata(){
    return i;
  }
};

int main(){
  Demo d(55);
  Demo *ptr;
  ptr = &d;
  cout<<ptr->getdata();
}
