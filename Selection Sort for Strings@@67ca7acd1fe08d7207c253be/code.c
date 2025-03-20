#include<stdio.h>
#include<string.h>

void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[j-1])<0){
                char temp[100];
                strcpy(temp,arr[j-1]); 
        strcpy(arr[i],arr[j-1]);
        strcpy(arr[j-1],temp);               
            }
        }
        // if(mini!=i){
        // char temp[100];
        // strcpy(temp,arr[i]); 
        // strcpy(arr[i],arr[mini]);
        // strcpy(arr[mini],temp);
        // }
    }
}

void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}