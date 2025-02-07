#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    int valid=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            num=arr[i];
            valid =1;
        }
    }
    if(valid==1){
        printf("%d",num);
    }
    else{
        printf("-1");
    }
    return 0;
}