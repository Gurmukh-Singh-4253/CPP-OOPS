#include <bits/stdc++.h>

class Base{
public:
  virtual void show(){
    cout<<"Base"<<endl;
  }
};

class Der1: public Base{
public:
  void show(){
    cout<<"Der1"<<endl;
  }
};

class Der2: public Base{
public:
  void show(){
    cout<<"Der2"<<endl;
  }
};

int main(){
  Der1 dv1;
  Der2 dv2;
  Base*ptr;
  ptr=&dv1;
  ptr->show();
  ptr=&dv2;
  ptr->show();
}
