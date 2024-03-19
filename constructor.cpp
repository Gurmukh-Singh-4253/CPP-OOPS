#include <iostream>
using namespace std;

class Student{
public:
  int rollnumber;
  string name;
  int fees;

  void displaydata(){
    cout<<"Roll no: "<< rollnumber << endl<<"Name:"<<name<<endl<<"Fees:"<<fees<<endl;
  }

  Student(int rno, string getsname, int inputfee){
    rollnumber = rno;
    name = getsname;
    fees = inputfee;
  }
};

int main(){
  Student s(8, "Gurmukh", 58000);
  s.displaydata();
}
