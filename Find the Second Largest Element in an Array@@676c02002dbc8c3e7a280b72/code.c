#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int valid=0;
    int max1=arr[3];
    int max2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
            valid=1;
        }
    }
    
   if(valid==1){
    printf("%d",max2);
   }
   else{
    printf("-1");
   }
  
    return 0;
}