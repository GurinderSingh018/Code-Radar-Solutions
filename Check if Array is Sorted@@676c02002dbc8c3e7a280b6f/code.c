#include <stdio.h>


int main() {
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",arr[i]);
    
    }
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }

    return 0;
}