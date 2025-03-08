#include<stdio.h>

int searchInRotatedArray(int arr[],int n,int target){
    int i;
    int valid=0;
   
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