#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char str2[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int j=0;
    for(int i=0;i<n;i++){
        int a=str[i];
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            str2[j]=str[i];
            j++;
        }
    }
    printf("%s",str2);
}