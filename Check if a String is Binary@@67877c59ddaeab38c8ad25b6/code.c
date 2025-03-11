#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",&str);
    int n=strlen(str);
    int valid =1;
    for(int i=0;i<n;i++){
        if(str[i]!='1'||str[i]!='0'){
            valid=0;
            break;
        }
    }
    if(valid)
        printf("Yes");
    else
        printf("No");
    return 0;
}