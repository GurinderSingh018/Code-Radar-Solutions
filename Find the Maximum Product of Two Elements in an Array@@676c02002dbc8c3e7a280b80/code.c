#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
        int a=arr[i]*arr[j];
        if(a>max){
            max=a;
        }
       }
       }
    }
    printf("%d",max);
    return 0;
}

