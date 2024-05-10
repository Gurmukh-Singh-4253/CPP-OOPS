#include <bits/stdc++.h>

class Sample{
  int a,b;
public:
  void input(int a, int b){
    this-> a = a + b;
    this-> b = a - b;
  }
  void display(){
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
  }
};

int main(){
  Sample x;
  int a = 5, b = 8;
  x.input(a,b);
  x.display();
}
