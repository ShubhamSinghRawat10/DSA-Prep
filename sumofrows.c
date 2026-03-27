#include <stdio.h>
#define MAX 100  
//create function
void createArr(int arr[MAX][MAX], int *row, int *col) {
    printf("Enter row size: ");
    scanf("%d", row);
    printf("Enter column size: ");
    scanf("%d", col);

    printf("Enter the values:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
//print function in arr
void printArr(int arr[MAX][MAX], int row, int col) {
    printf("\nElements of matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}
//transpose 
void transpose1(int arr[MAX][MAX],int transpose[MAX][MAX],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
}
int main() {
    int arr[MAX][MAX];   
    int transpose[MAX][MAX];
    int row, col;
    createArr(arr, &row, &col);  
    printArr(arr, row, col);
    transpose1(arr,transpose,row,col);
    printArr(transpose,col,row);      

    return 0;
}
