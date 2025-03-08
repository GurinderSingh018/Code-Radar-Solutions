#include <stdio.h>

int findUnsortedSubarray(int arr[],int n){
    
    int i;
    int count=0;
    for(i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            
            count++;
        }
        else{
            break;
        }
      
    }
    return n-count;
}

