#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);    
    }
    int valid=1;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            valid=0;
            break;
        }
        
    }
    if(valid==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }

    return 0;
}