#include<stdio.h>

int findOccurrence(int arr[],int n,int t,char c){
    int i;
    for(i=0;i<n;i++){
            if(c=='F' && t==arr[i]){
                return i;
                break;
            }
            else if(c=='L' && t==arr[i] && t!=arr[i+1]){
                return i;
                break;
            }
            else{
                return -1;
                break;
            }
        
    }
}