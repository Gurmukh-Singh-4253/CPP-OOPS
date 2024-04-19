//Calcualte the total marks of each student of class in physics, chemistry and math and the average marks of the class. The number of students in the class are entered by the user. Create a class named marks with data members for roll number, name and marks. Create three other classes inheriting the marks class, namely physics, chemistry, maths which are used to define marks in individual subject of each student. Roll number of each student is to be generated automatically.
#include "iostream"
using namespace std;

class Marks{
  int rollno;
public:
  string name;
  int marks;
  void fetchname(){
    cout<<"Enter name:";
    cin>>name;
  }
  void putrollnumber(int x){
    rollno = x;
  }
  string getname(){
    return name;
  }
};

class Physics:public Marks{
public:
  void fetchmarks(){
    cout<<"Enter Marks in physics:";
    cin>>marks;
  }
};

class Chemistry:public Marks{
public:
  void fetchmarks(){
    cout<<"Enter Marks in chemistry:";
    cin>>marks;
  }
};

class Maths:public Marks{
public:
  void fetchmarks(){
    cout<<"Enter Marks in maths:";
    cin>>marks;
  }
};

int main(){
  int n;
  cout<<"Enter the number of students";
  cin>>n;
  Physics p[n];
  Chemistry c[n];
  Maths m[n];
  for(int i = 0;i<n;i++){
    p[i].putrollnumber(i+1);
    p[i].fetchname();
    p[i].fetchmarks();
    c[i].putrollnumber(i+1);
    c[i].name = p[i].getname();
    c[i].fetchmarks();
    m[i].putrollnumber(i+1);
    m[i].name = p[i].getname();
    m[i].fetchmarks();
  }
  for(int i = 0;i<n;i++){
    cout<<"Name:"<<p[i].getname()<<endl;
    cout<<"Physics:"<<p[i].marks<<endl;
    cout<<"Chemistry:"<<p[i].marks<<endl;
    cout<<"Maths:"<<p[i].marks<<endl<<endl;
  }
}
