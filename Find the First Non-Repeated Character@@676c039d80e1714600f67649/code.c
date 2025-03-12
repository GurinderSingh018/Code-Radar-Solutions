#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int valid=0;
    int i;
    for(i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(str[i]!=str[j]){
                valid=1;
            }
         }
         if(valid=1){
            break;
         }
    }
    printf("%c",str[i]);

}