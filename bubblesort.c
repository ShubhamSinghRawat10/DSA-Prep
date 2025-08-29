#include<stdio.h>
#define arr 100
void createbubble(){
    int n;
    printf("");
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<i-n-1;j++)
        {

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    }
}