#include <stdio.h>



int main() {
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    int r=a+b;
    if(r>c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
    
}