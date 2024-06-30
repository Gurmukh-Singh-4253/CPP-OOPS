#include <iostream>
using namespace std;

void showarr(int arr[],int len){
  for(int i = 0; i<len; i++){
    cout<<arr[i]<<'\t';
  }
  cout<<endl;
}

// Does not work
// void insertionsort(int arr[], int len){
//   for(int i = 1; i<len; i++){
//     int j;
//     for(j = i; j>0; j--){
//       if (arr[i]>arr[j]) {
//         j++;
//         break;
//       }
//     }
//     int temp = arr[i]; 
//     for(int k = i; k>j; k--){
//       arr[k]= arr[k-1];
//     }
//     arr[j]= temp;
//     showarr(arr,len);
//   }
// }

void insertionsort(int arr[], int len) {
  for (int i = 1; i < len; i++) {
    int temp = arr[i];
    int j = i;
    
    // Shift elements of arr[0..i-1], that are greater than temp,
    // to one position ahead of their current position
    while (j > 0 && arr[j - 1] > temp) {
      arr[j] = arr[j - 1];
      j--;
    }
    
    // Place temp at its correct position
    arr[j] = temp;
    
    // Assuming showarr is a function to display the array
    showarr(arr, len);
  }
}

int main(){
  int arr[]={9,8,7,6,5,4,3,2,1};
  
  cout<<"Pre sorting array: "<<endl;
  for(auto x : arr){
    cout<<x<<'\t';
  }
  cout<<endl;
  cout<<endl;
  insertionsort(arr,9);
  cout<<endl;
  cout<<endl;
  cout<<"Post sorting array:"<<endl;
  for(auto x : arr){
    cout<<x<<'\t';
  }
  cout<<endl;
}
