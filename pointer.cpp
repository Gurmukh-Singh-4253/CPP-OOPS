#include <iostream>
using namespace std;

int main(){
  int a = 25; 
  int *p = &a;
  int **s = &p;

  cout<<"\n*p:"<<*p<<endl;
}
