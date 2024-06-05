#include <iostream>
using namespace std;

template<typename T>
T large(T n1, T n2){
  return (n1>n2)?n1:n2;
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<"The larger one is:"<<large(a, b)<<endl;
  float x,y;
  cin>>x>>y;
  cout<<"The larger one is:"<<large(x, y)<<endl;
}
