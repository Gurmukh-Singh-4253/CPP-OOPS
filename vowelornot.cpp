// check wether a character is a vowel or a consonant 

#include <iostream>
using namespace std;

int main(){
	char x;
	cout<< "Enter a character";
	cin>> x;
	switch (x){
		case ('a'):
			cout<< "Vowel"<< endl;
			break;
		case ('e'):
			cout<< "Vowel"<< endl;
			break;
		case ('i'):
			cout<< "Vowel"<< endl;
			break;
		case ('o'):
			cout<< "Vowel"<< endl;
			break;
		case ('u'):
			cout<< "Vowel"<< endl;
			break;
		default:
			cout<< "consonant"<< endl;
	}
}
