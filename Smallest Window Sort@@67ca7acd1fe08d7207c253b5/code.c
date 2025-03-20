#include <stdio.h>

int findUnsortedSubarray(int arr[],int n){
    
    int i;
    
    for(i=0;i<n-1;i++){
        
        if(arr[i]>arr[i+1]){
            
            break;            
        }      
    }
    int j;

    for(j=n-1;j>=0;j--){
        
        if(arr[j]<arr[j+1]){
            
            break;
        }
    }
    int count=j-i-1;
    return count;
}

