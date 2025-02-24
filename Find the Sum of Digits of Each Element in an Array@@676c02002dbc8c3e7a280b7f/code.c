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
        if(x<0){
            x=-1*x;
        }
        int count=0;
        while(x>0){
            int a=x%10;
            count=count+a;
            x=x/10;
        }
        
        printf("%d ",count);
    }

    return 0;
}