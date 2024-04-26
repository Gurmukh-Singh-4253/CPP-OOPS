#include <iostream>
using namespace std;

class Student{
public:
  int roll_no;
  string name;
  Student(){
    cout<<"Enter Roll No:";
    cin>>roll_no;
    cout<<"Enter name:";
    cin>>name;
  }
};

class Test{
public:
  int marks[5];
  Test(){
    cout<<"Enter the marks in each subject"<<endl;
    for (int i = 0; i<5; i++){
      cout<<"Subject"<<i+1<<":";
      cin>>marks[i];
    }
  }
};

class Result: public Student, public Test{
public:
  Result(): Student(),Test(){
    int sum = 0;
    for (int i = 0; i<5; i++){
      sum+= marks[i];
    }
    totalmarks = sum;
    percentage = (sum/125.0)*100;
  };
  int totalmarks;
  float percentage;
  void display(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll number:"<<roll_no<<endl;
    cout<<"Subjectwise marks:"<<endl;
    for(int i = 0; i<5; i++){
      cout<<"\tSubject "<<i+1<<":"<<marks[i]<<endl;
    }
    cout<<"Total Marks:"<<totalmarks<<endl;
    cout<<"Percentage:"<<percentage<<endl;
  }
};

int main(){
  Result x;
  x.display();
}
