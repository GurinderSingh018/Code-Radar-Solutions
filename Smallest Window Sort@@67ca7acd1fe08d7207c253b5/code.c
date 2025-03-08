#include <stdio.h>

int findUnsortedSubarray(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return n-i-1;
            break;
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[1000];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);

        }
        printf("%d/n",findUnsortedSubarray(arr,n));
    }
}