#include <stdio.h>
#include<string.h>

int main() {
    char str[50];
    scanf("%s",&str);
    int l=strlen(str);
    int count=1;
    for(int i=0;i<n;i++){
        if(str[i]==" "){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}