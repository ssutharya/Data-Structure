/*Write a program to count the total number of duplicate elements in an unsorted character 
array in O(n) time complexity.*/

#include <iostream>
#include <set>
using namespace std;

void create_arr(char *arr, int n){
    int count = 0;
    cout << "Enter the array elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void duplicate_count(char *arr, int n){
    int count = 0;
    set <char> frequency;
    for (int i = 0; i < n; i++){
        if (frequency.count(arr[i]))
			count++;
        else
			frequency.insert(arr[i]);
    }
    cout << "The number of duplicate letters found in array is: " << count << endl;
}
    
int main()
{
    char *arr;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    arr = new char[n];
    create_arr(arr, n);
    duplicate_count(arr, n);
    return 0;
}

/* Input - Output: 

Enter size of array: 8
Enter the array elements:
a s d f d a e f
The number of duplicate letters found in array is: 3 */
