#include <stdio.h>
#include<string.h>

int main() {
    char str[50];
    gets(str);
    int l=strlen(str);
    int count=0;
    for(int i=0;i<l;i++){
        if((i==0 && str[i]!=' ')||(str[i]==' ')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}