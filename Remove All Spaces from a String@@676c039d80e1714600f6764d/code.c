#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char str1[50];
    for(int i=0;i<strlen(str);i++){
        if(i==0&&str[i]==' '){
            str1[i]=str[i+1];
            continue;
        }
        else if(str[i]==' '){
            i=i-1;
            continue;
            
        }
        str1[i]=str[i];
    }
    printf("%s",str1);
}