#include <iostream>
using namespace std;

int main(){
  int x,rev= 0; 
  cin >> x;
  while (x != 0){
    rev = rev*10+x%10;
    x/=10;
  }
  cout<< rev<< endl;
}
