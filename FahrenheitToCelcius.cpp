#include <iostream>
using namespace std;

int main(){
  float f,c;
  cout<< "Enter temp in fahrenheit:";
  cin>> f;
  c = (f-32)*5.0/9.0;
  cout<< "Equivaent temp in celcius:"<< c<< endl;
}
