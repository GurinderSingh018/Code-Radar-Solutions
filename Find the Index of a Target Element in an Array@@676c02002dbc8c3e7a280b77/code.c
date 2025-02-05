#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int T,i;
    int valid =0;
    scanf("%d",&T);
    for( i=0;i<n;i++){
        if(arr[i]==T){
            valid=1;
             break;
        }
    }
    if(valid==1){
        printf("%d",i);
    }
    else{
        printf("-1");
    }
    
    return 0;
}