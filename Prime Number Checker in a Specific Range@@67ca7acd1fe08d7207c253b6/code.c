#include <stdio.h>

int printPrimesInRange(int a,int b){
    int n=b-a+1;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=a+i;
    }
    
    for(int i=0;i<n;i++){ 
        int count=0;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",arr[i]);
        }
    }
                        
    

}