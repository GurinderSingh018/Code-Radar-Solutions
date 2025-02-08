#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   

    int count=0;
    int prime=1;
    for(int i=0;i<n;i++){
        
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;

            }
        }
        if(count==2){
            prime++;
        }
        
    }
    int length=sizeof(prime)/sizeof(prime[0]);
    printf("%d",prime);
    return 0;
}