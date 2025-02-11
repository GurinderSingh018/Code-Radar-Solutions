#include<stdio.h>
int main(){
    char str1[25],str2[25],result[50];
    int i=0;
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    while(str1[i]!='\0'){
        if(str1[i]=='\n'){
            str1[i]='\0';
        }
        i++;
    }
    for(i=0;str1[i]!='\0';i++){
        result[i]=str1[i];
    }
    for(int j=0;str2[j]!='\0';j++,i++){
        result[i]=str2[j];
    }
    result[i]='\0';
    printf("%s%s",str1,str2);

    return 0;
 }