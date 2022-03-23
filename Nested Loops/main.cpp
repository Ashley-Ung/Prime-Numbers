//Turning this program into a Nested Loop  

#include <iostream> 

using namespace std; 

int main () {
	
	int anInt;
	bool bIsPrime;
	
	do {
		cout << "Enter an integer greater than 1: ";
		cin >> anInt;
	} while (anInt <= 1);
	
	for (int counter = 2; counter <= anInt; counter++) { 
		bIsPrime = true;
		for (int i = 2; i <= counter / 2 && bIsPrime; i++) {
			if (0 == counter % i) {
				bIsPrime = false;
			}
		}
		if (bIsPrime) {
			cout << counter << " is prime" << endl;
		}
	}
	
	return 0;
	
}


turn this program into a nested loop 
produce all the primes if user enters 6, u output  print out only the 
primes from 2 up to the userinput 
2 is prime
3 is prime 
5 is prime  

//Inner Loop
loops faster 

//Outer loop 
loops slower 
