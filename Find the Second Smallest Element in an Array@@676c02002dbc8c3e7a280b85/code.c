#include <stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }
    int min1=INT_MAX;
    int min2=INT_MAX;
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