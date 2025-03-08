#include<stdio.h>

int binarySearch(int arr[],int n,int target){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==target){
            
         break;
        }
    }
    return i;
}