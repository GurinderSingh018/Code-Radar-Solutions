#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a>0&&a<8){
        if(a==2){
            printf("28");
            
        }
        else if(a%2==0){
            printf("30");

        }
        else{
            printf("31");
        }
    }
    else if(a>=8 && a<=12){
        if(a%2==0){
            printf("31");
        }
        else{
            printf("30");
        }
    }
    else{
        printf("Invalid month");
    }
    return 0;
}