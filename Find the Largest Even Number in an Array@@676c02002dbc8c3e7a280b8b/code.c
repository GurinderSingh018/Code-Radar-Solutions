#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int valid=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(max<(int)arr[i]){
                max=arr[i];
                
            }
            valid=1;
        }

    }
    if(valid)
       printf("%d",max);
    else
       printf("-1");
    return 0;
}