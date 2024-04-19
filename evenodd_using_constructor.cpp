#include <iostream>
using namespace std;

class UselessObject{
public:
  int data;
  UselessObject(int x){
    cout<<"Enter any number: ";
    cin>>x;
    data = x;
  }
  UselessObject(){
    if (data %2 == 0){
      cout<<"Even";
    }
    else {
      cout<<"Odd";
    }
  }
};

int main(){
  int x;
  UselessObject a(x);
  UselessObject b;
}
