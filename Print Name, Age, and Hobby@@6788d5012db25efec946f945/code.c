#include <stdio.h>

int main() {
    char str1[50],str2[50];
    int a;
    scanf("%s %d",&str1, &a);
    scanf("%s",&str2);
    printf("Name: %s\nAge: %d\nHobby: %s",str1,a,str2);
    return 0;
}