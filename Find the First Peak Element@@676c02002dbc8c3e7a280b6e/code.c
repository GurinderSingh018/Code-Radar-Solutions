#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i;
    int valid=0;
 
    for(i=0;i<=n-1;i++){
         
        if((i>0 && i<n-1 && arr[i-1]<arr[i] && arr[i]>arr[i+1])||
        (i==n-1 && arr[i]>arr[i-1])){
            valid=1;
            break;
        }
           }
    
   
    if(valid==1){
        printf("%d",arr[i]);
    }
    
    else{
        printf("-1");
    }
    return 0;
}