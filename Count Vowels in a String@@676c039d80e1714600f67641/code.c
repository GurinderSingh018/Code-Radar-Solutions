#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[50];
    char voewls[]="aeiou";
    scanf("%s",&str);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
        char a=tolower(str[i]);
        for(int j=0;j<6;j++){
            if(a==voewls[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}