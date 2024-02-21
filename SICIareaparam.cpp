// find simple interest, compound interest, area and parameter of a rectangle and a circle
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float principal, rate, time;
	cout<<"Principle:";
	cin>>principal;
	cout<<"Rate:";
	cin>>rate;
	cout<<"time:";
	cin>>time;
	float si = principal*rate*time;
	float ci = principal*pow((1+rate/100),time);

	float radius;
	cout<<"Enter radius:"<<endl;
	cin>>radius;
	cout<<"Area of circle"<<3.14159265*radius*radius<<endl;
	cout<<"Perimeter of circle"<<2*3.1415926535*radius<<endl;

	float length,bredth;
	cout<<"Enter the length and bredth of rectangle:";
	cin>> length;
	cin>> bredth;
	cout<<"Area of rectangle"<<length*bredth<<endl;
	cout<<"Perimeter of rectangle"<<2*(length+bredth)<<endl;
}
