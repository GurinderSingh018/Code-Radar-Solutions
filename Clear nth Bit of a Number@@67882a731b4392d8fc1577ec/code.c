#include <stdio.h>


int main() {
    int a,b,result;
    scanf("%d %d",&a, &b);
    result=(a>>b)&0;
    printf("%d",result<<b);
    
    return 0;
}