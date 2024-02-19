#include <iostream>
using namespace std;

int main(){
  int c;
  cout <<"Enter the number and get the day: ";
  cin>> c;
  // c =4;
  switch (c) {
    case 0:
      cout<<"Monday"<<endl;
      break;
    case 1:
      cout<<"Tuesday"<<endl;
      break;
    case 2:
      cout<<"Wednesday"<<endl;
      break;
    case 3:
      cout<<"Thursday"<<endl;
      break;
    case 4:
      cout<<"Friday"<<endl;
      break;
    case 5:
      cout<<"Saturday"<<endl;
      break;
    case 6:
      cout<<"Sunday"<<endl;
      break;
  }
}
