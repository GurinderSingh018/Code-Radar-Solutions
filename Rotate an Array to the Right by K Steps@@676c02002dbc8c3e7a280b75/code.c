#include <stdio.h>

int main() {
    int n;
    int arr[i];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k,temp,j;
    scanf("%d",&k);
    for(int i=0;i<=k;i++){
        temp=arr[n-1];
        for(int j=n-1;j>=1;j--){
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    } 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}