#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int square=power(b,2);
    if(square==a){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}