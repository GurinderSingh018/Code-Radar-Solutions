#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char c;
    scanf("%s",str);
    scanf("%c",&c);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]=c;
        }
    }
    printf("%s",str);
    return 0;
}