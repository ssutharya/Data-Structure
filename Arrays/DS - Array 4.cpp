/*Write a program to merge two sorted arrays of the same size to get a resultant array which 
is sorted in the reverse order. Analyse the time complexity of your algorithm. */

#include<iostream>
using namespace std;

int* sort(int arr1[],int arr2[],int merged[], int size){
   int k =0;
   for(int i =0;i<size;i++){
    merged[k]=arr1[i];
    merged[k+size] = arr2[i];
    k++;
   }
   if(arr1[0]>arr1[size-1]){
    for( int i=0;i<size*2;i++){
            for (int j = i+1;j<size*2;j++){
                if(merged[j]<merged[i]){
                    int temp = merged[j];
                    merged[j]= merged[i];
                    merged[i] = temp;
                }
            }
        }
   }
   else{
    for( int i=0;i<size*2;i++){
            for (int j = i+1;j<size*2;j++){
                if(merged[j]>merged[i]){
                    int temp = merged[j];
                    merged[j]= merged[i];
                    merged[i] = temp;
                }
            }
        }

   }
    return merged;
}
int* read_arr(int size){
    int *arr = new int[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    return arr;
}
void print_array(int arr[] ,int size){
    for(int i =0;i<size;i++)
    cout<<arr[i]<<" ";
}
int main(){
    int size ;
    cout<<"Enter size for the two arrays : ";
    cin>>size;
    int *arr3= new int[size*2];
    cout<<"Two arrays with size "<<size<<" has been created"<<endl;
    cout<<"Enter the first sorted array"<<endl;
    int *arr1=read_arr(size);
    cout<<"Enter the second sorted array"<<endl;
    int *arr2= read_arr(size);
    arr3=sort(arr1,arr2,arr3,size);
    cout<<"The merged array in descending order is: ";
    print_array(arr3, size * 2); 
    cout<<endl; 
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;  
    return 0;
}
/* Input and Output:

Enter size for the two arrays : 4
Two arrays with size 4 has been created
Enter the first sorted array
5 4 8 6
Enter the second sorted array
3 2 5 4
The merged array in descending order is: 8 6 5 5 4 4 3 2 */
