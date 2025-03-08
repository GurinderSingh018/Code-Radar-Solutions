#include<stdio.h>

int binarySearch(int arr[],int n,int target){
    int i;
    int valid=0;
    if(arr[0]==arr[1]){
        return n/2;
    }
    else{
    for(i=0;i<n;i++){
        
        if(arr[i]==target){
         valid=1; 
         break;
        }
        
    }
    if(valid)
       return i;
    else
       return -1;
    }
}