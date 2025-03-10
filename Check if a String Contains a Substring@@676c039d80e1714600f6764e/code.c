#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char str1[50];
    fgets(str,sizeof(str1),stdin);
    int valid=0;
    for(int i=0;i<strlen(str1);i++){
         for(int j=0;j<strlen(str);j++){
               if(str1[i]==str[j]){
                  valid=1;
                  break;
               }
         }
         if(valid==0){
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