#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],f[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        f[i]=1;
    }
        
    for(int i=0;i<n;i++){
       if(f[i]==0){
        continue;
       }
       for(int j=i+1;j<n;j++){
        
        if(arr[i]==arr[j]){
            f[i]++;
            f[j]=0;
        }
       }
       int max=INT_MIN;
       int num;
       for(int i=0;i<n;i++){
        if(f[i]>max){
            max=f[i];
        }
       }
       int k;
       for(k=0;k<n;i++){
         if(max==f[i]){
            break;
         }
       }
       printf("%d",f[k]);
    }
}