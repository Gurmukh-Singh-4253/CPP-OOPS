#include "iostream"
using namespace std;

class Student{
  char name[50];
  int dob[3];
  char mobile[10];
public:
  void getdata(){
    cout<<"Enter Name:";
    cin>> name;
    cout<<"Enter the date of birth";
    cin>>dob[0]>>dob[1]>>dob[2];
    cout<<"Enter the phone number";
    cin>>mobile;
  }
  void print(){
    cout<<"Name:"<<name<<endl<<"Date of birth:"<<dob<<endl<<"phone:"<<mobile<<endl;
  }
};

int main(){
  int x;
  cout<<"Enter the number of students:";
  cin>>x;
  Student s[x];
  for (int i = 0; i<x;i++) s[i].getdata();
  for (int i = 0; i<x;i++) {
    s[i].print();
    cout<<endl;
  }
}
