#include <stdio.h>

void bubbleSort(int arr[n],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j+1]<arr[j]){
                arr[i]=arr[j];
            }
        }
    }
}
int printArray(int arr[i],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}