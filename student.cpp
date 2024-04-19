// class student, data student rollno, function members getdata, setdata. create object.

#include <iostream>
#include <string>
using namespace std;

class Student{
  int rollno;
  string name;
  static string course;
public:
  void getdata(){
    cout<< "Enter the rollnumber, name and serialnumber of the student";
    cin>> rollno>>name;
  }
  void displaydata(){
   cout<<"Roll no.:"<<rollno<<endl<<"Name:"<<name<<endl<<"Course:"<<course<<endl;
  }
};

string Student::course = "B.Tech CSE";

int main(){
  Student s;
  s.getdata();
  s.displaydata();
}
