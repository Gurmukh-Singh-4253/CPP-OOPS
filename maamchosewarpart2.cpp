//we want to share the information of different vehicles, create a class named vehicle with two data members named mileage and price create two subclasses car with data members to store ownership cost and warranty(years), seating capacity and fuel type. bike with data members to store the number the number of cylenders, gears, cooling type air, liquid, oil, wheel type and fuel tank size. make anothe two subclasses of car each having a data members to store the model type. next make two subclasses bajaj and tvs each having a data member to store the make type. now store and print all the information of a audi and ford car. do the same for a bajaj and a tvs bike.
#include <bits/stdc++.h>

class Vehicle{
public:
  float mileage;
  int price;
};

class Car: public Vehicle{
public: 
  int ownershipCost;
  int warranty;
  int seatingCapacity;
  string FuelType;
};

class Bike: public Vehicle{
public:
  int numberOfCylenders;
  int numberOfGears;
  string coolingType;
  string wheelType;
  float fuelTankSize;
};

class Koenigsegg: public Car{
public:
  string modelType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"ownershipCost:"; cin>> ownershipCost;
    cout<<"warranty:"; cin>> warranty;
    cout<<"seatingCapacity:"; cin>> seatingCapacity;
    cout<<"FuelType:"; cin>> FuelType;
    cout<<"modelType:"; cin>> modelType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"ownershipCost:"<<ownershipCost<<endl;
    cout<<"warranty:"<<warranty<<endl;
    cout<<"seatingCapacity:"<<seatingCapacity<<endl;
    cout<<"FuelType:"<<FuelType<<endl;
    cout<<"modelType:"<<modelType<<endl;
  }
};

class Pagani: public Car{
public:
  string modelType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"ownershipCost:"; cin>> ownershipCost;
    cout<<"warranty:"; cin>> warranty;
    cout<<"seatingCapacity:"; cin>> seatingCapacity;
    cout<<"FuelType:"; cin>> FuelType;
    cout<<"modelType:"; cin>> modelType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"ownershipCost:"<<ownershipCost<<endl;
    cout<<"warranty:"<<warranty<<endl;
    cout<<"seatingCapacity:"<<seatingCapacity<<endl;
    cout<<"FuelType:"<<FuelType<<endl;
    cout<<"modelType:"<<modelType<<endl;
  }
};

class Bajaj: public Bike{
public:
  string makeType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"numberOfCylenders:"; cin>> numberOfCylenders;
    cout<<"numberOfGears:"; cin>> numberOfGears;
    cout<<"coolingType:"; cin>> coolingType;
    cout<<"wheelType:"; cin>> wheelType;
    cout<<"fuelTankSize:"; cin>> fuelTankSize;
    cout<<"makeType:"; cin>>makeType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"numberOfCylenders:"<<numberOfCylenders;
    cout<<"numberOfGears:"<<numberOfGears;
    cout<<"coolingType:"<<coolingType;
    cout<<"wheelType:"<<wheelType;
    cout<<"fuelTankSize:"<<fuelTankSize;
    cout<<"makeType:"<<makeType;
  }
};

class TVS: public Bike{
public:
  string makeType;
  void getintel(){
    cout<<"Mileage:"; cin>> mileage;
    cout<<"price:"; cin>> price;
    cout<<"numberOfCylenders:"; cin>> numberOfCylenders;
    cout<<"numberOfGears:"; cin>> numberOfGears;
    cout<<"coolingType:"; cin>> coolingType;
    cout<<"wheelType:"; cin>> wheelType;
    cout<<"fuelTankSize:"; cin>> fuelTankSize;
    cout<<"makeType:"; cin>>makeType;
  }
  void giveintel(){
    cout<<"Mileage:"<<mileage<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"numberOfCylenders:"<<numberOfCylenders;
    cout<<"numberOfGears:"<<numberOfGears;
    cout<<"coolingType:"<<coolingType;
    cout<<"wheelType:"<<wheelType;
    cout<<"fuelTankSize:"<<fuelTankSize;
    cout<<"makeType:"<<makeType;
  }
};

int main(){
  Koenigsegg Agera;
  Pagani Huayra;
  Bajaj b;
  TVS t;
  Agera.getintel();
  Agera.giveintel();
  Huayra.getintel();
  Huayra.giveintel();
  b.getintel();
  b.giveintel();
  t.getintel();
  t.giveintel();
}
