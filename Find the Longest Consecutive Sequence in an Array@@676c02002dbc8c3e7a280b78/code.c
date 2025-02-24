#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    int length=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] || arr[i]==arr[j]+1){
            length++;
        }
        }
    }
    printf("%d",length);
    return 0;

}
