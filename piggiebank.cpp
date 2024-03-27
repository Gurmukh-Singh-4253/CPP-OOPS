#include <iostream>
using namespace std;

class AddAmount{
public:
  int amount;
  AddAmount(){
    amount = 50;
  }
  AddAmount(int x){
    amount = 50+x;
  }
  ~AddAmount(){
    cout<<"Destructor is called"<<endl;
  }
};

int main(){
  AddAmount dikshant, navjot(20);
  cout<<dikshant.amount<<endl;
  cout<<navjot.amount<<endl;
}
