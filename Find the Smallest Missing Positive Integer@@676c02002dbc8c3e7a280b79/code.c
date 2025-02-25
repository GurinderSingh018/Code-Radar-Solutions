#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int num=0;
    
    for(int i=0;i<=n;i++){
        int valid=1;
        num=num+1;
       for(int j=0;j<n;j++){
        if(arr[j]==num){
             valid=0;
             break;
        }
       }
       if(valid){
        printf("%d",num);
        break;
       }
      
    }
    return 0;
}