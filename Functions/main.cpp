//Turning this program into a Function 

#include <iostream> 

using namespace std; 

//Function Prototype 
bool isPrime (int anInt);

int main () {
	
	int anInt;
	
	do {
		cout << "Enter an integer greater than 1: ";
		cin >> anInt;
	} while (anInt <= 1);
	//for (int counter = 2; counter <= anInt; counter++) { 
	//	
	//}
	if (isPrime (anInt)) {
		cout << anInt << " is prime" << endl;
	}
	
	return 0;
	
}

//Function Definition 
bool isPrime (int anInt) {
	
	bool bIsPrime = true;
	for (int i = 2; i <= anInt / 2 && bIsPrime; i++) {
		if (0 == anInt % i) {
			bIsPrime = false;
		}
	}
	return bIsPrime;
}
	

*********************************************************************	
Main is a function  

//To make a function 
Above main: define the function protype
In side main: you do whatever logic, test the protype inside main 
Outside Main: write the function definition 

//Line 7 
This is the function protype: bool isPrime (int anInt);

//Line 35 
We want the function prototype outside of main 
	
