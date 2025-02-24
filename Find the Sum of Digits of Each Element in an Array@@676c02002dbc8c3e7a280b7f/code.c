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
        while(x>100){
            int a=x%10;
            count=count+a;
            x=x/10;
        }
        int b=x%10;
        int c=x/10;
        count=count+b+c;
        printf("%d ",count);
    }

    return 0;
}