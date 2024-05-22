#include <iostream>
using namespace std;

class Student{
  int rollno;
  string name;
  string department;
public:
  Student(){
    cout<<"Enter Rollno:";
    cin>>rollno;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Department:";
    cin>>department;
  }
  friend void fetchdetails(Student*);
};

void fetchdetails(Student* ptr){
  cout<<"ptr->rollno:"<<ptr->rollno<<endl;
  cout<<"ptr->name:"<<ptr->rollno<<endl;
  cout<<"ptr->department:"<<ptr->rollno<<endl;
}

int main(){
  Student s;
  Student *ptr = &s;
  fetchdetails(ptr);
}
