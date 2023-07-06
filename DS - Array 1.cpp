/* Write a menu driven program that repeatedly reads an option from the terminal to do the 
following array operations on array ARR:
Option 1. Read integer n (<=100) , the size of array followed by n integer elements of 
ARR
Option 2. Print the elements of array ARR
Option 3. Read an integer elem to search in the array. Print FOUND/SORRY 
accordingly
Option 4. Print the largest and smallest element of the array
Option 5. Exit
The program should be modular and should contain the following functions : 
main(), read_arr(int[] arr, int n), print_arr(int[] arr, int n), search_arr(int[] arr, int n, 
int elem), get_max(int[] arr, int n), get_min(int[] arr, int n) */

#include <iostream>
using namespace std;

void create_arr(int *arr, int n);
void print_arr(int *arr, int n);
void search_arr(int *arr, int n, int element);
void get_max(int *arr, int n);
void get_min(int *arr, int n);

int main(){
    int *arr;
    int n;
    int ch;
    cout<<"1. Enter size and elements of array\n2. Print elements of array\n3. Search an element in array\n4. Print largest and smallest element of array\n5. Exit"<<endl;
    while(ch != 6){
        cout<<"\nEnter choice: ";
        cin>>ch;
        switch (ch){
        case 1:
            cout<<"Enter size of array: ";
            cin>>n;
            arr=new int[n];
            create_arr(arr, n);
            break;
        
        case 2:
            cout<<"Elements of array"<<endl;
            print_arr(arr, n);
            break;
        case 3:
            int element;
            cout<<"Enter element to search: ";
            cin>>element;
            search_arr(arr, n, element);
            break; 
        case 4:
            get_max(arr, n);
            get_min(arr, n);
            break;
        case 5:
            cout<<"Thank you"<<endl;
            exit (0);
            break;
        default:
            cout<<"Invalid choice."<<endl;
            break;
        }
    }
    return 0;
}

void create_arr(int *arr, int n){
    cout<<"Enter elements of array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Array of size "<<n<<" is created"<<endl;
}

void print_arr(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

void search_arr(int *arr, int n, int element){
    bool found=0;
    for (int i = 0; i < n; i++){
        if (arr[i] == element){
            found = 1;
            cout<<"Element Found.\nIndex of element is: "<<i<<endl;
            break;
        }
    }
    if (found == 0)
		cout<<"Element Not Found."<<endl;
}

void get_max(int *arr, int n){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<" is the largest element of the array."<<endl;
}

void get_min(int *arr, int n){
    int min = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < min){
            min=arr[i];
        }
    }
    cout<<min<<" is the smallest element of the array."<<endl;
}
/* Input and Output

1. Enter size and elements of array
2. Print elements of array
3. Search an element in array
4. Print largest and smallest element of array
5. Exit

Enter choice: 1
Enter size of array: 6
Enter elements of array:
3 6 9 2 5 8
Array of size 6 is created

Enter choice: 2
Elements of array
3 6 9 2 5 8

Enter choice: 3
Enter element to search: 5
Element Found.
Index of element is: 4

Enter choice: 3
Enter element to search: 7
Element Not Found.

Enter choice: 4
9 is the largest element of the array.
2 is the smallest element of the array.

Enter choice: 5
Thank you */
