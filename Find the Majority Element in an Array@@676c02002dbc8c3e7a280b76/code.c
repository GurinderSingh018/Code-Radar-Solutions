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
        int count =0;
        for(int j=0j<n-1;j++){
        if(arr[i]==arr[j+1]){
            count++;
            if(count>(n/2)){
                num=arr[i];
                valid=1;
                break;
            }
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