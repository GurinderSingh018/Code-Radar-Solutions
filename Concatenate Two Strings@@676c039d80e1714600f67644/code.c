#include<stdio.h>
int main(){
    char str1[25];
    char str2[25];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    printf("%s %s",str1,str2);

    return 0;
 }