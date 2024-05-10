//Write a cpp program to concatenate 2 statements from two classes and printing it by using abstract class.
//
#include <bits/stdc++.h>

class String1;
class Statement{
public:
  virtual string concat()=0;
};

class String2{
public:
  string s;
  String2(string s){
    this->s = s;
  }
  string concat(String1);
};

class String1{
public:
  string s;
  String1(string s){
    this->s = s;
  }
  string concat(String2 x){
    return s+x.s;
  }
};

string String2::concat(String1 x){
  return s+x.s;
}

int main(){
  String1 s1("Hello ");
  String2 s2("World");
  cout<<s1.concat(s2)<<endl;
}
