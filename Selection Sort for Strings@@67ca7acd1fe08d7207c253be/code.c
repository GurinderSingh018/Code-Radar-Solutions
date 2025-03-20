#include<stdio.h>
#include<string.h>                                                                                                    
void selectionSort(char arr[],int n){
      for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(arr[j], arr[j + 1]) > 0){
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
      }
}

void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}