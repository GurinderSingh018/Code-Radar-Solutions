#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int num=arr[0];
    int valid =1;
    for(int i=0;i<n;i++){
        
        for (int j=0;j<n;j++){
          if(n<3 || arr[i]==arr[i+1]){
            valid=0;
            
          }
          else if(arr[i]<max && arr[i]>arr[j] ){
               num=arr[i];
               valid=1;
          }
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