#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char str2[50];
    fgets(str,sizeof(str),stdin);
    fgets(str2,sizeof(str2),stdin);
    int valid=0;
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(str2);j++){
            if(str[i]==str2[j]){
                valid=1;
                break;
            }
        }
        if(valid==0){
            break;
        }
    }
    if(valid==1){
        printf("Yes");
    }
    else{
        printf("No");
}
    return 0;
}