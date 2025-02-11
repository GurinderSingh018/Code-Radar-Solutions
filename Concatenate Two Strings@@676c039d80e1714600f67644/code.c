#include<stdio.h>
int main(){
    char str1[25];
    char str2[25];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    char str3[]= str1+str2;
    printf("%s",str3);

    return 0;
 }