#include "iostream"
using namespace std;

int main(){
  int x;
  int n1=1,n2=1;
  cin>>x;
  cout<<n1<<",";
  for(;x>1;x-=2){
    cout<<n2<<",";
    n1 = n1+n2;
    if (x==2) break;
    cout<<n1<<",";
    n2 = n2+n1;
  }
  cout<<endl;
}
