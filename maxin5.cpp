#include <iostream>
using namespace std;

int main(){
  int x[5];
  for(int i = 0;i<5;i++){
    cin>> x[i];
  }
  int max = x[0];
  for(int i = 0;i<5;i++){
    if (max<x[i]){
      max = x[i];
    }
  }
  cout<< max<< endl;
}
