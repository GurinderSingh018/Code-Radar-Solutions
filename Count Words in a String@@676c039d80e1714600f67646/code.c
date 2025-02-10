#include <stdio.h>
#include<string.h>

int main() {
    char str[50];
    fgets(str,sizeof(str),stdin);
    int l=strlen(str);
    int count=0;
    for(int i=0;i<l;i++){
        if((i==0 && str[i]!=' ')||(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}