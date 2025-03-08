#include <stdio.h>

int selectionSort(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            int temp=min;
            min = arr[i];
            arr[i]=min;
            arr[i+1]=temp;
        }
    }
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        print("%d ",arr[i]);
    }
}