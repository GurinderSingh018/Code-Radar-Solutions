#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    for(int i=0;i<n/2;i++){
        for(int j>=n/2;j=n-1;j--){
            int sum=arr[i]+arr[j];
            if(sum==T){
                printf("%d %d\n",arr[i],arr[j]);
                break;
            }
        
        }
    }
}
