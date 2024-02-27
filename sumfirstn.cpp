#include <iostream>
using namespace std;

int main(){
  int x, sum=0;
  cout<<"Enter the number of natural numbers to be summated:";
  cin>>x;
  for(;x>0;x--) sum+=x; 
  cout<<sum<<endl;
}
