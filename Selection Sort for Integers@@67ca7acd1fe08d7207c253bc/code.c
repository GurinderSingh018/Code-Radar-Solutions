#include <stdio.h>

int selectionSort(int arr[],int n){
    
    for(int i=0;i<n;i++){
       
            if(arr[i]>arr[i+1]){
               int temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
        
    }
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}