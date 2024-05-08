#include <iostream>
using namespace std;

class Area{
public:
  double area;
};

class Rectangle: public Area{
  float length;
  float width;
public:
  void getvalues(){
    cout<<"Enter the length and the width of the rectangle:";
    cin>>length>>width;
  }
  friend void computearea(Rectangle *r);
};

class Square: public Area{
  float side;
public:
  void getvalues(){
    cout<<"Enter the side of the Square:";
    cin>>side;
  }
  friend void computearea(Square *s);
};

void computearea(Rectangle *r){
  r->area = r->length*r->width;
}

void computearea(Square *s){
  s->area = s->side * s->side;
}

int main(){
  Square s;
  Square *ptrs = &s;
  Rectangle r;
  Rectangle *ptrr = &r;
  r.getvalues();
  s.getvalues();
  computearea(ptrr);
  computearea(ptrs);
  cout<<"The area of the Square is "<< ptrs->area<<endl;
  cout<<"The area of the Rectangle is "<< ptrr->area<<endl;
}
