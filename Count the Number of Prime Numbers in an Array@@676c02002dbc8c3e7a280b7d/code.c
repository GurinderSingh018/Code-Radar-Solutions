#include <stdio.h>
#

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int prime[n];
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==2){
            prime[i]=arr[i];
        }
    }
    int length=sizeof(prime)/sizeof(prime[0]);
    printf("%d",length);
    return 0;
}