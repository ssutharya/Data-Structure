/*Write a recursive function that, given a number n, returns the sum of the digits of the 
number n.*/

#include <iostream>
using namespace std;

int sum_of_digits( int n){
	if (n == 0){
		return 0;
	}
	return n % 10 + sum_of_digits(n / 10);
}

int main(){
	int n;
	cout << "Enter a number to check the sum of its digits: ";                                     // input is 32567
	cin >> n;
	
	cout << "The sum of the digits in " << n << " is " << sum_of_digits(n) << "." << endl;         // output is 23
	return 0;
}
