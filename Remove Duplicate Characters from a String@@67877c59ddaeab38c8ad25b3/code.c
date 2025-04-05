#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char str2[50];
    scanf("%[^\n]s",&str);
    int k=0;
    for(int i=0;i<strlen(str);i++){
        int count =0;
        for(int j=i+1;j<strlen(str2);j++){
            if(str[i]=str2[j]){
                i++;
            }
        }
        
            str2[k++]=str[i];
        
    }
    printf("%s",str2);
    return 0;
}