#include <iostream>
using namespace std;

// template shortens this
// void printdata( int value){
//   cout<<"The value is "<<value;
// }
//
// void printdata( float value){
//   cout<<"The value is "<<value;
// }
//
// void printdata( char* value){
//   cout<<"The value is "<<*value;
// }

template<typename T>
void printdata(T value){
  cout<<"The value is "<<value;
}

// or you could justy abuse auto... perhaps
// void printdata(auto value){
//   cout<<"The value is "<<value;
// }
// or no C++ doesnt allow it, im a dummy.

int main();
