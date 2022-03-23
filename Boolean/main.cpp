
#include <iostream> 

using namespace std; 

int main () {
	
	int anInt;
	bool bIsPrime;
	
	do {
		cout << "Enter an integer greater than 1: ";
		cin >> anInt;
	} while (anInt <= 1);
	
	bIsPrime = true;
	for (int i = 2; i <= anInt / 2 && bIsPrime; i++) {
		if (0 == anInt % i) {
			bIsPrime = false;
		}
	}
	
	if (bIsPrime) { 
		cout << anInt << "is prime" << endl; 
	}
	else {
		cout << anInt << "is not prime" << endl;
	}
	
	return 0;
	
}

//line 14: while (anInt <= 1);
By DeMorgans law u can write it either way as:!(anInt > 1)or(anInt <=1)

// a prime number is a number divisible by 1 and itself 

//line 18 (0 == anInt % i)
As soon as we find something that evenly divides, we kick out of the 
loop. 
ask urself: is anInt evenly divisible by i? if it is we dont have a 
prime number.

//Relational expression vs Assignment bIsPrime vs bIsPrime == true/false 
line 16 and line 19, we set bIsPrime to true/false because it is an 
assignment, not a relational expression

We have relational expressions when we are using conditional statements: 
if (condition)
while (condition)
for (intitialize; condition; increment)
do-while (condition) 

We have assignments when the variable is set = to something that is not 
within a conditional statement  

line 17 and line 23 for bIsPrime, its a relational expression so 
we dont set it ewual to true or false cuz its already comparing 
if bIsPrime is true and we set it ewual to true, its already true 
if bIsPrime is true and we set it equal to false, its going to be 
false 

//line 16: bIsPrime=True versus bIsPrime=False 
8 possible divisors 2,3,4,5,6,7
setting bIsPrime to true assumes number is prime 
is 8 evenly divisible by 2? yes, is 8 prime 

7 possible divisors 2,3,4,5,6 
setting bIsPrime to false assumes, number is not prime 
check all possible divisors to show 7 is prime 

//Line 23
bIsPrime==true 
we get true + true so its already true 
bIsPrime==false 
we get false + true so its false 
so mainly we put bIsPrime alone and not set it equal to true or false 
because we dont need to compare it 

//line 17 anInt / 2
Refer to: 8 possible divisors 2,3,4,5,6,7
anInt/2 cuz 8 does not divide evenly into 5,6,7 so theres no point in 
checking it. Also, the divide by 2 means half of 8 involves 2,3,4, 
but not 5,6,7 

//line 17 i <= anInt / 2
Refer to: 8 possible divisors 2,3,4,5,6,7
<= because we dont want to throw out 4, we want to make sure we include 
it 

************************************************************************
turn this program into a nested loop 
produce all the primes if user enters 6, u output  print out only the 
primes from 2 up to the userinput 
2 is prime
3 is prime 
5 is prime  
