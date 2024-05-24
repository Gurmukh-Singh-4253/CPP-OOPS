#include <iostream>
using namespace std;

class Time{
  int hours, minutes;
  int seconds;
public:
  void gettime(){
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
  }
  void settime(){
    cin>>hours>>minutes>>seconds;
    normalize();
  }
  void normalize(){
    minutes+= seconds/60;
    hours+= minutes/60;
    seconds = seconds % 60;
    minutes %= 60;
  }
};

int main(){
  Time t;
  t.settime();
  t.gettime();
}
