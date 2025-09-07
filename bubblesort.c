#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void printarr(int arr[],int n){
    for(int i =0;i<n;i++){
        
            {
                printf("%d",arr[i]);
            }
            printf("\n");
        }
    }
int main()
{
     int n;

    // Taking array size from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array elements from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printarr(arr, n);

    // Sort the array
    bubblesort(arr, n);

    printf("Sorted array: ");
    printarr(arr, n);

    return 0;
}
