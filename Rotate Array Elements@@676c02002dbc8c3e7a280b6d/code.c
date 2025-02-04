#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k,temp;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        temp=arr[n-1];
        for(int j=1;j<=n-1;j++){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}