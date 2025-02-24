#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int num=0;
    int valid=1;
    for(int i=0;i<n;i++){
        num++;
       for(int j=0;j<n;j++){
        if(arr[j]==num){
             valid=0;
             break;
        }
       }
       if(valid==1){
        printf("%d",num);
        break;
       }
    }
    return 0;
}