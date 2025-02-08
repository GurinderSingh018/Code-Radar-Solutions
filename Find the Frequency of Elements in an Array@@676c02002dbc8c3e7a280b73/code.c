#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        
    }
    int arr3[n];
    
    for(int i=0;i<=n/2;i++){
        
        if(arr3[i]!=arr3[i+1]){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr3[i]=arr[i];
                
            }
        }
        arr2[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(arr2[i]>0){
            printf("%d %d\n",arr3[i],arr2[i]);
        }
    }
    return 0;
}