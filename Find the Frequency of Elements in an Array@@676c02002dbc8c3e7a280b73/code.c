#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    
    int arr2[n];
    for(int i=0;i<n;i++){
        int count=1
        for(int j=0;j<n;j++){
            if(arr[i]=arr[j]){
                count++;
            }
        }
        arr2[i]=count;
    }
    for(int i=0;i<n;i++){
        if(arr2[i]>0){
            printf("%d %d\n",arr[i],arr2[i]);
        }
    }
    return 0;
}