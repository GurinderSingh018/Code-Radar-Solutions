#include<stdio.h>
#include<string.h>

int main(){
    char str1[40];
    char str2[40];
    scanf("%[^\n]s",&str1);
    scanf("%[^\n]s",&str2);
    for(int i=0;i<strlen(str1)-1;i++){
        for(int j=i+1;j<strlen(str1);j++){
            if(str1[i]>str1[j]){
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    for(int i=0;i<strlen(str2)-1;i++){
        for(int j=i+1;j<strlen(str2);j++){
            if(str2[i]>str2[j]){
                char temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    printf("%s %s",str1,str2);
    return 0;
}