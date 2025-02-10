#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int x=arr[i];
        int count=0;
        while(x<100){
            x=x%10;
            count=count+x;
        }
        int b=x%10;
        int c=x/10;
        int sum=count+b+c;
        printf("%d ",sum);
    }

    return 0;
}