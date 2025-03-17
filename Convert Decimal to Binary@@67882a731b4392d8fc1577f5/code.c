#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int flag=0;
    for (int i = 31; i >= 0; i--)  {
    if ((n >> i) & 1) {flag = 1;}
    if (flag) {printf("%d", (n >> i) & 1);  }
    }
    if (flag==0){
        printf("%d",0);
    }
}