#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    char c;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&c);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            str[i]=c;
        }
    }
    printf("%s",str);
    return 0;
}