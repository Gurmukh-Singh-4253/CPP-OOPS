#include <iostream>
using namespace std;

class Employee{
public:
  char EmployeeName[50];
  int salary;
  int age;

  void setdata(){
  cout<<"Enter Employee Name:";
  cin>> EmployeeName;
  cout<<"Enter the salary of"<<EmployeeName;
  cin>> salary;
  cout<<"Enter the age of "<<EmployeeName;
  cin>> age;
}
  void displaydata(){
  cout<<"Name:"<<EmployeeName<<endl;
  cout<<"Age:"<<age<<endl;
  cout<<"salary:"<<salary<<endl;
}
};

int main(){
  Employee obj1, obj2;
  obj1.setdata();
  obj2.setdata();
  obj1.displaydata();
  obj2.displaydata();
}
