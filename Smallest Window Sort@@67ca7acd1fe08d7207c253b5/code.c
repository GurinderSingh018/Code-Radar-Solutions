#include <stdio.h>

int findUnsortedSubarray(int arr[],int n){
    
    int i;
    int c=0;
    for(i=0;i<n-1;i++){
        c++;
        if(arr[i]>arr[i+1]){
            
            break;            
        }      
    }
    int j;

    for(j=n-1;j>0;j--){
        c++;
        if(arr[j]<arr[j+1]){
            
            break;
        }
    }
    int count=n-c;
    return count;
}

