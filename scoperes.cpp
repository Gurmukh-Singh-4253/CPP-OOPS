#include <iostream>
using namespace std;

int m = 10;

int main(){
  int m = 20;
  {
    int k = m;
    int m = 3;
    cout<<"we are in inner block"<< endl;
    cout<<"k = "<<k<< endl;
    cout<<"m = "<<m<<endl;
    cout<<"::m = "<<::m<<endl;
  }
  cout<<"we are in outer block"<<endl;
  cout<<"m = "<<m<<endl;
  cout<<"::m = "<<::m<<endl;
}
