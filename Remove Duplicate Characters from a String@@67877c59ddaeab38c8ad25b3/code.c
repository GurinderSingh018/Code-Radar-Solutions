#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char str2[50];
    scanf("%[^\n]s",&str);
    
    for(int i=0;i<strlen(str);i++){
        int valid=1;
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                valid=0;
            }
        }
        if(valid){
            str2[i]=str[i];
        }
    }
    print("%s",str2);
}