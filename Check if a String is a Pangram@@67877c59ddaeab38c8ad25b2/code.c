#include<stdio.h>

int main(){
    char str[26]="abcdefghijklmnopqrstuvwxyz";
    char str2[50];
    scanf("%[^\n]s",&str2);
    int valid=0;
    for(int i=0;i<26;i++){
        for(int j=0;str2[j]!='\0';j++){
            if(str[i]==str2[j]){
                vaild=1;
                break;
            }
        }
        if(valid==0){
            break;
        }
    }
    if(valid){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}