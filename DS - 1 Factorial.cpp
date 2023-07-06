/*Write a recursive implementation of the factorial function. Recall that n! = 1 × 2 × ... × n, 
with the special case that 0! = 1.*/

#include <iostream>
using namespace std;

int factorial(int n){
	if ( n == 0 || n == 1){
		return 1;
	}
	return n * factorial(n - 1);
}

int main(){
	int n;
	cout << "Enter an integer to find the factorial of: ";
	cin >> n;                                              // input is 5
	cout << "\nThe factorial of " << n << " is " << factorial(n) <<"." << endl;        // output is "The factorial of 5 is 120."
	return 0;
}
