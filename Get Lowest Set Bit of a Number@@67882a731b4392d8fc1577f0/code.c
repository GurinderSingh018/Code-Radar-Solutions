#include <stdio.h>

void main(){
    int a,pos=0;
    scanf("%d",&a);
    while (!(a&1)){
        a>>=1;
        pos++;
    }
    printf("%d", pos);

}