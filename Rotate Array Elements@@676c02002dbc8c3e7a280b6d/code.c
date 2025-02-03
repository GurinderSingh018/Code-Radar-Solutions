#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>=1;j--){
            arr[j]=arr[j-1];
        }
        arr[i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}