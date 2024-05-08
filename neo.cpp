#include <bits/stdc++.h>

class Hello{
  int x;
public:
  void dis(){
    cout<<x<<endl;
  }
  void inc(){
    x++;
  }
  Hello(){
    x = 0;
  }
};

int main(){
  vector<Hello> greetings;
  Hello s;
  for(int i = 0; i<10; i++) greetings.push_back(s);
  for(auto x: greetings){
    x.inc();
    x.dis();
  };
  for(auto x: greetings){
    x.inc();
    x.dis();
  };
}
