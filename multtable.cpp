// Print multiplication table of a number.
#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Enter the number";
	cin>>x;
	for(int i=1;i<=100;i++){
		cout<< x <<" times "<< i << " = " << x*i<< endl;
	}
}
