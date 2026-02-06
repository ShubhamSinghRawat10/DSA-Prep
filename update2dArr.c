#include<stdio.h>
int row;
int collumn;
int arr[100][100];
//function to create array
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
    //update function
void updateArr()
{
    int rowpos;
    int colpos;
    printf("Enter the row pos:");
    scanf("%d",&rowpos);
    if(rowpos >row || rowpos<0){
        printf("invalid position");
    }
    else {
        printf("enter position of col in row: %d ",rowpos);
    
    scanf("%d",&colpos);
    if (colpos>collumn || colpos<0)
    {
    printf("invalid column");
    }
    else{
        printf("Enter the value you want to update");
        int value;
        scanf("%d",&value);
        arr[rowpos-1][collumn-1]=value;
        printf("value updated successuflly");
    }
}
}    
//easy code to update value in 2d array
//print function
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
    //main function
int main(){
    createArr();
    printArr();
    updateArr();
    printArr();
    return 0;

}
// End of code