// if a given year is a leap year

#include <iostream>
using namespace std;

int main(){
	int year;
	cout<<" Enter the year: ";
	cin>>year;
	if (year%1000==0){
		cout<<"Leap"<<endl;
	}
	else if (year%100==0){
		cout<<"Not Leap"<<endl;
	}
	else if (year%100==0){
		cout<<"Not Leap"<<endl;
	}
	else if (year%4==0){
		cout<<"Leap"<<endl;
	}
	else{
		cout<<"Not Leap"<<endl;
	}
}
