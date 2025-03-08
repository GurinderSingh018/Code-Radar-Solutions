#include <stdio.h>

int findUnsortedSubarray(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return n-i-1;
            break;
        }
      
    }
}

