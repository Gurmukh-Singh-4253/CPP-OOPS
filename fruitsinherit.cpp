//Calcualte total fruits in a basket, create classes apples and mangoes. Find total of each type. Print the total of each type and the total number of fruits in the basket using the concept of inheritance.
//Calcualte the total marks of each student of class in physics, chemistry and math and the average marks of the class. The number of students in the class are entered by the user. Create a class named marks with data members for roll number, name and marks. Create three other classes inheriting the marks class, namely physics, chemistry, maths which are used to define marks in individual subject of each student. Roll number of each student is to be generated automatically.
  
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
