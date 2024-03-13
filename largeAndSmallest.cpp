#include <iostream>
using namespace std;

int main(){
  int arr[]={1,23,4,5,6,7,8,9,9,10};
  int max = arr[0], min = arr[0];
  for(int i = 0; i< 10; i++){
    if (max<arr[i]) max = arr[i];
    if (min<arr[i]) min = arr[i];
  }
  cout<<"max:"<<max<<endl<<"min:"<<min<<endl;
}
