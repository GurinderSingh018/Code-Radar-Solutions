#include <stdio.h>

int findUnsortedSubarray(int arr[],int n){
    int valid=0;
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            valid=1;
            break;
        }
      
    }
    if(valid){
        return n-i-1;
    }
    else{
        return 0;
    }
}

