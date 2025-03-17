#include <stdio.h>

int findUnsortedSubarray(int arr[],int n){
    
    int i;
    int c=0;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            c++;
            break;            
        }      
    }
    int j;

    for(j=n-1;j>0;j--){
        if(arr[j]<arr[j+1]){
            c++;
            break;
        }
    }
    int count=n-c;
    return count;
}

