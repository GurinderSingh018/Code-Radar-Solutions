#include <stdio.h>


int main() {
    char a;
    scanf("%c",&a);
    if(a<=122 &&a>=97){
        printf("Lowercase");
    }
    else if (a<=90 && a>=65 ){
        printf("Uppercase");
    }
    return 0;
}