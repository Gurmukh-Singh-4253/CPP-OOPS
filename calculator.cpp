#include "iostream"
using namespace std; 

int main(){
  int a ,b, res;
  char x;
  cout<< "Enter 2 numbers : ";
  cin >> a;
  cin >> b;
  cout<< "Enter the operator to perform: ";
  cin >> x;
  switch (x) {
    case ('+'):
      res = a+b;
      break;
    case ('-'):
      res = a-b;
      break;
    case ('*'):
      res = a*b;
      break;
    case ('/'):
      res = a/b;
      break;
    case ('%'):
      res = a%b;
      break;
  }
  // if (x=='+'){
  //     res = a+b;
  // }
  // else if (x=='-'){
  //     res = a-b;
  // }
  // else if (x=='*'){
  //     res = a*b;
  // }
  // else if (x=='/'){
  //     res = a/b;
  // }
  cout<< "The answer is :"<< res << endl;
}
