/*  Write a program to find the second largest element of a given integer array. Can you 
modify it to find the k-th largest element? */

#include <iostream>
using namespace std;

void create_arr(int *arr, int n){
    cout << "Enter elements of array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void second_largest(int *arr, int n){
    int largest = arr[0];
    int second_largest;
    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest){
            second_largest = arr[i];
        }
    }
    cout << second_largest << " is the second largest element in the array" << endl;
}

//kth largest element:
int kth (int arr[], int n, int k){
	int temp;
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	cout<<"The k-th (k="<<k<<") largest element in the array is: "<<arr[k-1]<<endl;
}

int main(){
    int *arr;
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    arr = new int[n];
    create_arr(arr, n);
    second_largest(arr, n);
    
    cout<<"Enter k: ";
    cin>>k;
    cout<<kth (arr, n, k);
    return 0;
}

/* Input - output: 

Enter size of array: 6
Enter elements of array:
25 36 58 69 47 14
58 is the second largest element in the array
Enter k: 3
The k-th (k=3) largest element in the array is: 47 */
