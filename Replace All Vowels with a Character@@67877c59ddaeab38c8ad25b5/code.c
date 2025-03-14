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
        int a=tolower(str[i]);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            str[i]=c;
        }
    }
    printf("%s",str);
    return 0;
}