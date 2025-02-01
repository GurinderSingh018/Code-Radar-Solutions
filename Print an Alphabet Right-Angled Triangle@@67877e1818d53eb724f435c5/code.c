#include <stdio.h>


int main() {
    char alpha[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",alpha[j-1]);
        }
        printf("\n");
    }
    return 0;
}