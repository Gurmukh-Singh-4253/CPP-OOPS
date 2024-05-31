#include <iostream>
using namespace std;

class Base{
public:
  Base(){
    cout<<"Base class constructor called."<<endl;
  }
};

class Base2{
public: 
  Base2(){
    cout<<"Base2 class constructor called."<<endl;
  }
};

class Inherited: public Base{
public:
  Inherited(){
    cout<<"Inherited class constructor called."<<endl;
  }
};

class Inherited2: public Inherited{
public:
  Inherited2(){
    cout<<"Inherited2 class constructor called."<<endl;
  }
};

class Inherited3: public Base, public Base2{
public:
  Inherited3(){
    cout<<"Inherited2 class constructor called."<<endl;
  }
};

int main(){
  cout<<"Creating Inherited object"<<endl;
  Inherited a;
  cout<<"Creating Inherited2 object"<<endl;
  Inherited2 b;
  cout<<"Creating Inherited3 object"<<endl;
  Inherited3 c;
}
