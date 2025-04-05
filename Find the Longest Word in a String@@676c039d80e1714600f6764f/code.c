#include<stdio.h>
#include<string.h>
int main(){
      char str[50];
      char str2[10][50];
      scanf("%[^\n]s",&str);
     
      int i,j=0,k=0;
      for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str2[k][j]='\0';
            k++;
            j=0;
        }
        else{
          str2[k][j]=str[i];
          j++;
        }
      }
      str2[k][j]='\0';
      int max = strlen(str2[0]);
      int m=0;
      for(int l=0;l<=k;l++){
        if(max<strlen(str2[l])){
            m=l;
        }
      }
    
      printf("%s",str2[m]);
      return 0;
}