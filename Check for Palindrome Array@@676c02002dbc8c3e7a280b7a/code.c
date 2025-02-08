#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n); 
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int valid=0;
    for(int i=0;i<n/2;i++){
        if(arr[i]==arr[n-1-i]|| n==1){
             valid=1;
        }
        else{
            break;
        }
    }
    if(valid==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}