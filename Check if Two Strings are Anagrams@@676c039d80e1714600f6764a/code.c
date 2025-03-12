#include<stdio.h>
#include<string.h>

void sort(char str[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;i++){
            if(str[i]>str[j]){
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}

int main(){
    char str1[50];
    char str2[50];
    int n=strlen(str1);
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    sort(str1,n);
    sort(str2,n);
    int valid=0;
    for(int i=0;i<n;i++){
        if(str1[i]==str2[i]){
            valid=1;
        }
    }
    if(valid){
        printf("Yes");
    }
    else{
        printf("No");
    }
}