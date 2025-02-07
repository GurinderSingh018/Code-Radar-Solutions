#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
   

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",arr[0]);
    }
    else{
    int num;
    int valid=0;
    for(int i=0;i<n-1;i++){
        int count =0;
        for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
           
        }
        }
        int a=n/2;
        if(count>a ){
            num=arr[i];
            valid=1;
            break;
        }
    }
    if(valid==1){
        printf("%d",num);
    }
    else{
        printf("-1");
    }
    }
    return 0;
}