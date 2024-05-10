//Write a cpp program to concatenate 2 statements from two classes and printing it by using abstract class.
//
#include <bits/stdc++.h>

class String1;
class Statement{
public:
  virtual string concat(string)=0;
};

class String2: public Statement{
public:
  string s;
  String2(string s){
    this->s = s;
  }
  string concat(string);
};

class String1: public Statement{
public:
  string s;
  String1(string s){
    this->s = s;
  }
  string concat(string x){
    return s+x;
  }
};

string String2::concat(string x){
  return s+x;
}

int main(){
  String1 s1("Hello ");
  String2 s2("World");
  cout<<s1.concat(s2.s)<<endl;
}
