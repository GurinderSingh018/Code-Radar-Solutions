#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    
    scanf("%[^\n]s",&str);
    int k=0;
    for(int i=0;i<strlen(str);i++){
        
        for(int j=i+1;j<strlen(str);j++){
            if(str[i]=str[j]){
                for(int k=j;k<strlen(str);k++){
                    str[k]=str[k+1];
                }
            }
        }        
            
        
    }
    printf("%s",str);
    return 0;
}