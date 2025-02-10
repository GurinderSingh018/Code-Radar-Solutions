#include <stdio.h>

int main() {
    char str[50];
    scanf("%s",&str);
    int count=0;
    for(int i=0;i<50;i++){
        count++;
        if(str[i]=='\0'){
            break;
        }
    }
    printf("%d",count);
    return 0;
}