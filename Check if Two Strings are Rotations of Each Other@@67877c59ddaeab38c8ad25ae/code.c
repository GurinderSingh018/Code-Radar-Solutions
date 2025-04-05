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
    printf("%s",str1);
    return 0;
}