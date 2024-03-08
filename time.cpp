// define class time with members hours minutes and seconds. also define function to set time to initialize the members and print to display time. demonstrate class for 2 objects. 
#include <iostream>
#include <iomanip>
using namespace std;

class Time {
  int hours, minutes, seconds;
public:
  void settime(int h, int m, int s){
    hours = h;
    minutes = m;
    seconds = s;
  }
  void print(){
    cout<<setw(2)<<hours<<":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds<<endl;
  }
};

int main(){
  Time unixstart, doomsday;
  int h,m,s;
  cout<<"Enter the hours, minutes and seconds";
  cin>> h>>m>>s;
  unixstart.settime(h,m,s);
  cout<<"Enter the hours, minutes and seconds";
  cin>> h>>m>>s;
  doomsday.settime(h,m,s);
  unixstart.print();
  doomsday.print();
}
