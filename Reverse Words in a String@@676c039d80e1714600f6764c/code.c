#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int i,j;
    for(int i=0;i<n;i--){
        for(int j=0;j<n;j++,i++){
            if(str[i]==" "){
                break;
            }
            char temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    return 0;
}