#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if((int)str[i]<=90){
            str[i]=tolower(str[i]);
        }
        else if((int)str[i]>=97){
            str[i]=toupper(str[i]);
        }
    }
    printf("%s",str);
}