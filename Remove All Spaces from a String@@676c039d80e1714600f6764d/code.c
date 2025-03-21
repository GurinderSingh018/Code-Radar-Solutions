#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char str1[50];
    int j=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            continue;
        }
        
        str1[j++]=str[i];
    }
    printf("%s",str1);
    return 0;
}