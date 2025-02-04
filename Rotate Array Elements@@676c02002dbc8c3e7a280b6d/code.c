#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k,temp,j;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        temp=arr[n-1];
        for(j=n-1;j>=1;j--){
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}