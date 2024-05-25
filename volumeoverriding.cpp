#include <iostream>
using namespace std;

float volume(float r){
  return 4.0/3.0*3.14159*r*r*r;
}

float volume(int a, int b, int c){
  return a*b*c;
}

int main(){
  float radii, l,b,h;
  cout<<"Enter the radius of the sphere:";
  cin>>radii;
  cout<<"enter the length, bredth and height of the cuboid:";
  cin>>l>>b>>h;
  cout<<volume(radii);
  cout<<volume(l,b,h);
}
