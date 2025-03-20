#include<stdio.h>
#include<string.h>

void caesarCipher(char message[],int s,char *encrypted[]){
    int n=strlen(message);
    for(int i=0;i<n;i++){
        encrypted[i]=message[i];
    }
}
