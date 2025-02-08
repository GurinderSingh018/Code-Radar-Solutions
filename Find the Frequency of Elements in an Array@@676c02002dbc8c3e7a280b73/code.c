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
    
    for(int i=0;i<n;i++){
       if(arr[i]!=-1){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                arr3[i]=arr[i];
                arr[j]=-1;                
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