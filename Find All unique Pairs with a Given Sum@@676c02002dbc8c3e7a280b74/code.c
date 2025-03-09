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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=arr[i]+arr[j];
            if(sum==T){
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
}
