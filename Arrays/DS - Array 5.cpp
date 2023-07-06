/* Write a program to read and print a matrix of size m x n. Also find the row sum and the 
column sum, and print the column number and row number that has the largest sum. Keep 
your code modular. */

#include <iostream>
using namespace std;

void createMatrix(int** matrix, int rows, int columns){
	cout<<"Enter elements of the matrix one by one"<<endl;
    for(int i=0;i<rows;i++){
        matrix[i]=new int[columns];
        for(int j=0;j<columns;j++){
		cin>>matrix[i][j];
        }
    }
}

void showMatrix(int** matrix, int rows, int columns){
	cout<<"\n\nA Matrix of the order "<<rows<<"x"<<columns<<" has been created\nThe matrix is:\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
		cout<<matrix[i][j]<<" ";
        }
	cout<<endl;
    }
}

int RowSum(int* row, int columns){
    int sum=0;
    for(int j=0;j<columns;j++){
        sum+=row[j];
    }
    return sum;
}
int ColumnSum(int** matrix, int rows, int column){
    int sum=0;
    for(int i=0;i<rows;i++){
        sum+=matrix[i][column];
    }
    return sum;
}
void largestSum(int** matrix, int rows, int columns){
    int largestRowSum=0;
    int largestRow=0;
    int largestColumnSum=0;
    int largestColumn=0;
    for(int i=0;i<rows;i++){
        int rowSum=RowSum(matrix[i],columns);
        if(rowSum>largestRowSum){
            largestRowSum=rowSum;
            largestRow=i;
        }
    }

    for(int j=0;j<columns;j++){
        int columnSum=ColumnSum(matrix,rows,j);
        if(columnSum>largestColumnSum){
            largestColumnSum=columnSum;
            largestColumn=j;
        }
    }
    cout<<"Row with the largest sum: "<<largestRow+1<<endl;
    cout<<"Column with the largest sum: "<<largestColumn+1<<endl;
}
int main(){
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int** matrix=new int*[m];
    createMatrix(matrix, m, n);
    showMatrix(matrix, m, n);
    largestSum(matrix, m, n);
    return 0;
}
/* Input and Output:

Enter the number of rows: 3
Enter the number of columns: 2
Enter elements of the matrix one by one
1 4 7 2 5 8


A Matrix of the order 3x2 has been created
The matrix is:
1 4
7 2
5 8
Row with the largest sum: 3
Column with the largest sum: 2  */
