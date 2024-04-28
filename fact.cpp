#include <iostream>
using namespace std;

int main(){
  int x;
  cout<<"Enter the number and get it's factorial:";
  cin>>x;
  int fact = 1;
  for(;x>0;x--) fact*=x;
  cout<<"Factorial:"<<fact<<endl;
}
