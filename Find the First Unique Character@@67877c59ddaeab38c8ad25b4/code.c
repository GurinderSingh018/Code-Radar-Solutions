#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int valid=0;
    int i;
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]!=str[j]){
                valid=1;
            }
            else{
                valid=0;
                break;
            }
        }
        if(valid){
            break;
        }
    }
    if(valid)
       printf("%c",str[i]);
    else
       printf("-");
}