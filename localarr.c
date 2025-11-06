#include<stdio.h>

void createarr(int rows, int column,int arr[100][100]){
    printf("Enter elements of rows and column %d %d\n",rows, column);
    for(int i=0;i<rows;i++)
    {
        for (int j=0;j<column;j++)
        {
            scanf("%d " ,&arr[i][j]);
        }
    }
}
// for printing array
void printarr(int rows,int column,int arr[100][100])
{

    for(int i=0;i<rows;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("%d " ,arr[i][j]);
        }
        printf("\n");
    }
}
//main function
int main ()
{
    
    int arr[100][100];
    int rows,column;
    printf("Enter no. of rows: ");
    scanf("%d",&rows);
    printf("Enter no. of column: ");
    scanf("%d",&column);
    createarr(rows,column,arr);
    printarr(rows,column,arr);
    return 0;

}