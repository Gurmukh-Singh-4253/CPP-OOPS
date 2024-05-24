#include <iostream>
using namespace std;

float area(float r){
  return 3.14159*r*r;
}

float area(int a, int b, int c){
  return a*b*c;
}

int main(){
  float radii, l,b,h;
  cout<<"Enter the radius of the sphere:";
  cin>>radii;
  cout<<"enter the length, bredth and height of the cuboid:";
  cin>>l>>b>>h;
  cout<<area(radii);
  cout<<area(l,b,h);
}
