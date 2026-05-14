#include<stdio.h>
#define MAX 100
int arr[MAX][MAX];
int row,collumn;
void insertelement()
{
    int col,row,value;
    printf("Enter Row pos: ");
    scanf("%d",&row);
    printf("Enter col pos: ");
    scanf("%d",&col);
    //hi 
    printf("Enter value pos: ");
    scanf("%d",&value);
    for(int j=col-1 ; j>col-1; j--)
    {
        arr[row-1][j+1]=arr[row-1][j];
    }
    arr[row-1][col-1]=value;
    col++;
}
// creation of 2d ar
void createArr(){
    printf("enter size of row:");
    scanf("%d",&row);
    printf("enter size of column:");
    scanf("%d",&collumn);
    printf("Enter elements in 2d array:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<collumn;j++)
        {
            scanf("%d",&arr[i][j]);
            }
        }
    }
void printArr()
    {
        printf("Array elements are:\n");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<collumn;j++)
            {
                printf("%d  ",arr[i][j]);
            }
            printf("\n");
        }
    }
    
int main(){
    createArr();
    printArr();
    insertelement();
    printArr();
    return 0;

}