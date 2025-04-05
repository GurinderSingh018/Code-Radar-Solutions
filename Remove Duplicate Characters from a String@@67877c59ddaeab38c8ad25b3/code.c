#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char str2[50];
    scanf("%[^\n]s",&str);
    
    for(int i=0;i<strlen(str);i++){
        int count =0;
        for(int j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            str2[i]=str[i];
        }
    }
    printf("%s",str2);
    return 0;
}