#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main(){
  map<int,int> square;
  for(int i = 0; i<10; i++){
    square[i] = i*i;
  }
  for(auto x: square){
    cout<<x.left<<":"<<x.right<<endl;
  }
}
