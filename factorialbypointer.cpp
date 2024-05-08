// write aa program to find the factorial of a number using poitner

#include <bits/stdc++.h>

int main(){
  int x;
  int *ptr;
  ptr = &x;
  cin>>x;
  int fact = 1;
  while(*ptr) fact *= x--;
  cout<<fact<<endl;
}
