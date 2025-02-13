#include<stdio.h>

int main(){
    char str[50];
    char a;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&a);
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]==a){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}