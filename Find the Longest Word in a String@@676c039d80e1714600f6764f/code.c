#include<stdio.h>
#include<string.h>
int main(){
      char str[50];
      char str2[10][50];
      fgets(str,sizeof(str),stdin);
      int i,j=0,k=0;
      for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str2[k][j]='\0';
            j=0;
            k++;
        }
        str2[k][j]=str[i];
        j++;
      }
      str2[k][j]='\n';
      int max=0;
      for(int i=0;i<k;i++){
        if(max<strlen(str2[i])){
            max=strlen(str2[i]);
        }
      }
    
      printf("%s",str2[max]);
      return 0;
}