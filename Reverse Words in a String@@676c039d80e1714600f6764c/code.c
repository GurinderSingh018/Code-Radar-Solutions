#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int i,j;
    char temp[50];
    for(i=0;i<n;i++){
        for(j=0;i<n;j++,i++){
            if(str[i]==' '){
                break;
            }
            temp[j]=str[i];
        }
        while(j>0){
            
            str[i-j]=temp[j];
            j--;
        }
    }
    printf("%s",str);
    return 0;
}