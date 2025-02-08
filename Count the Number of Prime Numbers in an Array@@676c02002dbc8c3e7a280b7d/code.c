#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int prime[n];

    int count=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;

            }
        }
        count=count/2;
        
    }
    int length=sizeof(prime)/sizeof(prime[0]);
    printf("%d",count);
    return 0;
}