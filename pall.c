#include<stdio.h>
// elements input krane ke liye
void inputarr(int arr[],int n){
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
// Palindrome check krne ke liye 
int palindrome(int num){
    int original=num , reversed=0;
    while(num>0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num/=10;
    }
    return original == reversed;
}
// palindrome ko loop mai check krte rehne ke liye 
int countPalindrome(int arr[],int n){
    int count=0;
    printf("Palindrome no. in the array :\n");
    for(int i=0;i<n;i++){
        if(palindrome(arr[i])){
            printf("%d", arr[i]);
            count++;
        }
    }
}
// function call ke liye hai
int main()
{
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    inputarr(arr,n);
    int total = countPalindrome(arr,n);
    printf("\nTotal palindrome number:",total);

}    