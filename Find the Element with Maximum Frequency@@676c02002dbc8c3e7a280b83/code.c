#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
       
    }
    int freq=0;
    int max_freq=0;
    int max;
        
    for(int i=0;i<n;i++){
        freq=0;
       
       for(int j=i+1;j<n;j++){
        
        if(arr[i]==arr[j]){
            freq++;
        }
       }
       if(max_freq<freq){
        max_freq=freq;
        max=arr[i];
       }
       
    }
    printf("%d",max);
    return 0;
}