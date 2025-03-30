#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if(sum==T){
                printf("%d %d\n",arr[i],arr[j]);
                
            }
           while(j+1<n && arr[j]==arr[j+1]) j++;
        }
        while (i+1<n && arr[i]==arr[i+1]) i++;
    }
}
