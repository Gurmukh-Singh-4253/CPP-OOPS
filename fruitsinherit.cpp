//Calcualte total fruits in a basket, create classes apples and mangoes. Find total of each type. Print the total of each type and the total number of fruits in the basket using the concept of inheritance.
  
#include <iostream>
using namespace std;

class Apples{
  int aqty = 3;
public:
  int counta(){
    return aqty;
  }
};

class Mangoes{
  int mqty = 4;
public:
  int countm(){
    return mqty;
  }
};

class Total: public Apples, public Mangoes{
public:
  int baskettotal(){
    return counta() + countm();
  }
};

int main(){
  Total x;
  cout<< x.baskettotal();
}
