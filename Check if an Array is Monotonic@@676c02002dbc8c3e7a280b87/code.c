#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int valid=0;
    for(int i=0;i<n-1;i++){
        if(arr[0]<=arr[1]){
           if(arr[i]<=arr[i+1]){
            valid=1;
        }
        else if(arr[0]>=arr[1]){
            if(arr[i]>=arr[i+1]){
                valid=1;
            }
        }
    }
    if(valid){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}