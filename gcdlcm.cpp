#include<iostream>
using namespace std;

int main(){
  int a,b,lcm,gcd;
  cout<<"Enter the 2 numbers:";
  cin>>a>>b;
  lcm = (a>b)?a:b;
  gcd = (a<b)?a:b;
  while(true){
    if (a%gcd==0 && b%gcd==0) break;
    gcd--;
  }
  while(true){
    if (lcm%a==0 && lcm%b==0) break;
    lcm++;
  }
  cout<< "GCD:"<<gcd<<endl<<"LCM:"<<lcm<<endl;
}
