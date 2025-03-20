#include<stdio.h>

int findOccurrence(int arr[],int n,int t,char c){
    int j;
   
    for(int i=0;i<n;i++){

            if(c=='F' && t==arr[i]){
                j= i;
                break;
            }
            else if(c=='L' && t==arr[i] && t!=arr[i+1]){
                j= i;
                break;
            }
            else{
                j=-1;
            }      
    }
    
    return j;
}