#include <iostream>
#include <math.h> 
using namespace std;

int main(){
  int x;
  cin >> x;
  for(int i = 2; i<=sqrt(x); i++){
    if (x%i==0){
      cout<< "Not prime"<< endl;
      return 0;
    }
  }
  cout << "Prime"<< endl;
}
