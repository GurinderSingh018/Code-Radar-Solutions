#include <stdio.h>

int main() {
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i]/10;
        int b=arr[i]%10;
        int sum=a+b;
        printf("%d ",sum);
    }

    return 0;
}