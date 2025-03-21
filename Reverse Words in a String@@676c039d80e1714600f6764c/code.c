#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++,i++){
            if(str[j]==' '){
                break;
            }
            char temp=str[j];
            str[j]=str[j+1];
            str[j+1]=temp;
        }
    }
    printf("%s",str);
    return 0;
}