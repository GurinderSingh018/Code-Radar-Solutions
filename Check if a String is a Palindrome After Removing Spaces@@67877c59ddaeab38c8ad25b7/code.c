#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char str2[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int j=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            continue;
        }
        str2[j++]=str[i];
    }
    int k=strlen(str2);
    int valid=1;
    for(int i=0;i<k/2;i++){
        if(str2[i]!=str2[k-i-1]){
             valid=0;
             break;
        }
        
    }
    if(valid){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}