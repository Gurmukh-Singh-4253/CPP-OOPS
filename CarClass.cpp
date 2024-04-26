#include <iostream>
using namespace std;

class Car{
public:
  void display1(){
    cout<<"Car class"<<endl;
  }
};

class FuelCar: public Car{
public:
  void display2(){
    cout<<"FuelCar class"<<endl;
  }
};

class ElecCar: public Car{
public:
  void display3(){
    cout<<"ElecCar class"<<endl;
  }
};

class HybridCar: public FuelCar, public ElecCar{
public:
  void display4(){
    cout<<"HybridCar class"<<endl;
  }
};

int main(){
  Car c;
  FuelCar f;
  ElecCar e;
  HybridCar h;
  h.display1();
  h.display3();
}
