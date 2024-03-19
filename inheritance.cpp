#include <iostream>
using namespace std;

class Shape{
public:
  float area, perimeter;
};

class Circle: public Shape{
public:
  Circle(int r){
    int radius;
    radius = r;
    area = 3.141592653589793 * radius * radius;
    perimeter = 2 * 3.141592653589793 * radius;
  }
  Circle(float r){
    float radius;
    radius = r;
    area = 3.141592653589793 * radius * radius;
    perimeter = 2 * 3.141592653589793 * radius;
  }
};

int main(){
  Circle C1(8);
  cout<< C1.area<<endl<< C1.perimeter<<endl;
  Circle C2(float(8.9));
  cout<< C2.area<<endl<< C2.perimeter<<endl;
}
