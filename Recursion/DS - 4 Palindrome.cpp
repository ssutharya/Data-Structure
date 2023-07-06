/* Write a recursive function that checks whether a string is a palindrome (a palindrome is a 
string that's the same when reads forwards and backwards.) */

#include <iostream>
using namespace std;

bool Palindrome(string s, int i){     
    if(i > s.size()/2){
       return true ;
    }
    return s[i] == s[s.size() - i - 1] && Palindrome(s, i + 1);
}     
     
int main(){
    string s;
	cout << "Enter a string to check: ";       // input 1: Enter a string to check: rabbits
	cin >> s;                                  // input 2: Enter a string to check: aibohphobia
    if (Palindrome(s, 0)){
    cout << "The string " << s << " is a palindrome.";          // output 2: The string aibohphobia is a palindrome.
	}
    else{
    cout << "The string " << s << " is not a palindrome.";      // output 1: The string rabbits is not a palindrome.
	}                                                       
    return 0;
 
}
