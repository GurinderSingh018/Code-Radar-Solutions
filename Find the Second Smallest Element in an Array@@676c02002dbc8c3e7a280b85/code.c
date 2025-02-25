#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }
    int min1=arr[0];
    int min2=arr[0];
    int valid=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
            valid=1;
        }
    }
    if(valid)
      printf("%d",min2);
    else
      printf("-1");

    
}