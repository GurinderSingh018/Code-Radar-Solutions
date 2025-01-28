#include <stdio.h>


int main() {
    char a;
    scanf("%c",&a);
    if(a<=122 &&a>=97){
        printf("Lowercase");
    }
    else {
        printf("Uppercase");
    }
    return 0;
}