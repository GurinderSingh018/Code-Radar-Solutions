#include <stdio.h>
#include<string.h>
int main() {
    char str[50];
    scanf("%s",&str);
    int n=strlen(str);
    int valid=1;
    for(int i=0;i<n/2;i++){
       if(str[i]=str[n-1-i]){
        valid=0;
       }
       else{
        break;
       }
    }
    if(valid==0||n==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}