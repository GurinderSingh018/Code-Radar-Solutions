#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    char str2[n];
    int count=0,maxcount=0;
    char c;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                count++;
                
            }
        }
        if(maxcount<count){
            maxcount=count;
            c=str[i];
        }
    }
    printf("%c",c);
    return 0;
}