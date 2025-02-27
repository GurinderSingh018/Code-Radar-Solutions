#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            scanf("%d",&arr2[i]);
        }
    }
    int max=arr2[0];
    for(int i=0;i<n;i++){
        if(max<arr2[i]){
            max=arr2[i];
        }
    }
    printf("%d",max);
    return 0;
}