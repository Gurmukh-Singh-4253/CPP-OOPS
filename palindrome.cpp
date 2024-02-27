#include <cstring>
#include <iostream>
using namespace std;

int main(){
  char x[25];
  cin >> x;
  for(int i = 0; i< strlen(x)/2; i++){
    if(x[i]!=x[strlen(x)-i-1]){
      cout<< "Not a palindrome"<< endl;
      return 0;
    }
  }
  cout<< "palindrome"<<endl;
}
