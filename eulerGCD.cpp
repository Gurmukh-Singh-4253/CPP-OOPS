#include <iostream>
using namespace std;

int GCD(int a,int b){
  if (a%b==0) return a;
  return GCD(b,b%a);
}

int main(){
  int a,b;
  cout<<"Enter 2 numbers and get their GCD";
  a = 1048576;
  b = 14348907;
  // cin>>a;
  // cin>>b;
  cout<<"The GCD is :"<<GCD((a>b)?a:b,(a<b)?a:b)<<endl;
}
