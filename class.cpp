#include "iostream"
using namespace std;

class Car{
  public: 
  void honk(){
    cout << "BEEP BEEP!" << endl;
  }
};

int main(){
  Car honda;
  honda.honk();
}
