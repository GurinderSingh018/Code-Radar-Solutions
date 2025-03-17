#include <stdio.h>

void main(){
    int n,count=0;
    scanf("%d",&n);
    while ((n & (1<<31))==0) { 
        count++; 
        n <<= 1;
    }
    printf("%d", count);

}