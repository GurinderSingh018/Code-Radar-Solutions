#include<stdio.h>

void printPrimesInRange(int a,int b){
    int n=b-a+1;
    int arr[n];
    for(int i=a;i<=b;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<b;i++){ 
        int count=0;
        for(int j=0;j<arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",arr[i]);
        }
    }
                        
    

}