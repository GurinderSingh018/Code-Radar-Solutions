#include<stdio.h>

void printPrimesInRange(int a,int b){
     int n=b-a+1;
     int arr[n];
     for(int i=0;i<n;i++){
        arr[i]=a+i;
     }
     int valid=0;
    for(int i=0;i<n;i++){
       int count=0;
        for(int j=1;j<=arr[i];i++){
            if(arr[i]%j==0){
                count++;
                
            }
        }
        if(count==2){
            
            printf("%d ",arr[i]);
            valid=1;
        }
     }
     if(valid==0){
        printf("No prime numbers");
     }
}