#include <stdio.h>

int main() {
    char str[50];
    scanf("%s",&str);
    int count=0;
    for(int i=0;i<50;i++){
        
        if(str[i]=='\0'){
            break;
        }
        count++:
    }
    printf("%d",count);
    return 0;
}