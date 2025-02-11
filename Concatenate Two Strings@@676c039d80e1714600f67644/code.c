#include<stdio.h>
int main(){
    char str1[25],str2[25],result[50];
    int i;
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    for(i=0;str1[i]!='\0';i++){
        result[i]=str1[i];
    }
    for(int j=0;str2[j]!='\0';j++,i++){
        result[i]=str2[i];
    }
    result[i]='\0';
    printf("%s",result);

    return 0;
 }