#include<iostream>
using namespace std;
int factrec(int n) {
    if(n==0){
        return 1;
    }
    else{
        return n*factrec(n-1);
    }
    }
    int main(){
        int n;
        cout<<"enter number : ";
        cin>>n;
        cout<<"fact: "<< factrec(n);
        return 0;
    }