#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);

    for(int i=0;i<n;i--){
        for(int j=0;str[i]!=' '|| str[i]!='\0';j++){
            
        }
    }
    return 0;
}