// write a program to find out the greatest and smallest among 3 numbers using pointers.

#include <bits/stdc++.h>

int main(){
  vector<int> x; 
  int temp;
  for(int i = 0; i<3; i++){
    cin>>temp;   
    x.push_back(temp);
  }
  for(auto num: x){
    if(num>temp){
      temp=num;
    }
  }
  cout<<temp<<endl;
}

