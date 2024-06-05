#include <iostream>
using namespace std;

template <typename x>
x max(x arr[],int len){
  x maximum = arr[0];
  for(int i = 0; i<len; i++){
    if(arr[i]>maximum){
      maximum = arr[i];
    }
  }
  return maximum;
}

int main(){
  int list[] = {12,423,56,2,532,453,1,5,2463,9822};
  cout<< max(list,sizeof(list)/sizeof(int))<<endl;
}
