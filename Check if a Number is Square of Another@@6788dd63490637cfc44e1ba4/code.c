#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int square=b*b;
    if(square==a){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}