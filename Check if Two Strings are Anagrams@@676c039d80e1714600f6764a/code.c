#include<stdio.h>
#include<string.h>
void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0'; 
    }
}
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
    if(valid){
        printf("Yes");
    }
    else{
        printf("No");
}
    return 0;
}