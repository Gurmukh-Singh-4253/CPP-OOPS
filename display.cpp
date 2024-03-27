#include <iostream>
using namespace std;

class Rectangle{
  int width, height;
  friend void display(Rectangle);
  friend void displayarea(Rectangle);
public:
  Rectangle(){
    cout<<"Enter the width and height:";
    cin>>width>>height;
  }
};

class Square{
  int side;
  friend void displayarea(Square);
public:
  Square(){
    cout<<"Enter the side";
    cin>>side;
  }
};

void display(Rectangle r){
  for(int i = 0; i<r.height; i++){
    for(int j = 0; j<2*r.width; j++){
      if(i==0 || i==r.height-1 || j<=1 || j>=2*r.width-2) cout<<"█";
      else cout<<" ";
    }
    cout<<endl;
  }
}

void displayarea(Rectangle r){
  cout<<r.width*r.height<<endl;
}

void displayarea(Square s){
  cout<<s.side*s.side<<endl;
}

int main(){
  Rectangle r1;
  display(r1);
}
