//write a program to find out the greatest and smallest among 3 numbers using pointers.
#include <bits/stdc++.h>

int main(){

  vector<int> x; 
  int max;

  for(int i = 0; i<3; i++){
    cin>>max;   
    x.push_back(max);
  }

  for(auto num: x){
    if(num>max){
      max=num;
    }
  }

  cout<<max<<endl;

}
