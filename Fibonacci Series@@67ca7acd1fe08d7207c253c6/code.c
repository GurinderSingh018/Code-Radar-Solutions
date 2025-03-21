#include<stdio.h>

void fibonacciSeries(int n){
    int a=0,b=1,c;
    
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}