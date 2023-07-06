/*Write a recursive function that, given a string s, prints the characters of s in reverse order.*/

#include <iostream>
using namespace std;

int reverse_of_string(string s)
{
    if(s.size() == 0)
    {
        return 0;
    }
    reverse_of_string (s.substr(1));
    cout << s[0];
}

int main()
{
    string a;
    cout << "Enter a string to reverse: ";        // input: carrots
    cin >> a;
	reverse_of_string(a);                         // output: storrac
    return 0;
}
