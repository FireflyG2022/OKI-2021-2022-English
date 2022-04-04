/*
//loop and printing
//version 1.4
Changes in every version
a. Program template
b. Added never ending loop
c. Added switch/case instruction 
d. Programme finished
Author: Olaf Świetlik/Olimpijskie koło Informatyczne
*/
#include <iostream>
using namespace std;
 
int main(){
	char character;
	while(true){
		cin >> character;
		switch(character){
		case'p':
			cout << "Print" << "\n";
			break;
		case 'r':
			cout << "Ready" << "\n";
			break;
		default:
			cout << "Error, didn't find written character";
	}
	}
	
 
}
