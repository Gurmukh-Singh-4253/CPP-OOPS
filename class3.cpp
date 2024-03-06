#include <iostream>
using namespace std;
class Car{
public:
  char company[30];
  int top_speed;
  void setdata();
  void displaydata();
};
void Car::setdata(){
  cout<<"Enter the company of the car:";
  cin>>company;
  cout<<"Enter the top speed of the car "<< company;
  cin>>top_speed;
}
void Car::displaydata(){
  cout<<"Company:"<<company<<endl;
  cout<<"Top speed"<<top_speed<<endl;
}
int main(){
  Car c;
  c.setdata();
  c.displaydata();
}
