#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    
    int count=0,maxcount=0;
    char c;
    for(int i=0;i<n;i++){
        count=0;
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