/* Write a recursive function that converts a decimal number into its binary representation. */

#include <iostream>
using namespace std;

int decimal_to_binary (int n){
	if ( n == 0){
		return 0;
	}
	return n % 2 + 10 * decimal_to_binary (n / 2);
}

int main(){
	int n;
	cout << "Enter a decimal number: ";                        // input: Enter a decimal number: 54
	cin >> n;
	cout << n << " in bianry is: " << decimal_to_binary(n);    // output: 54 in bianry is: 110110
	return 0;
}
