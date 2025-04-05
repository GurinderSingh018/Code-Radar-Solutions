#include<stdio.h>
#include<string.h>
int main(){
      char str[50];
      char str2[50];
      fgets(str,sizeof(str),stdin);
      int count;
      int max=0;
      int i=0;
      while(str[i]!='\0'){
        count =0;
        int j;
         for(j=0;j<strlen(str);j++){
            if(str[j]==' '){
                break;
            }
            count++;
         }
         if(max<count){
            max=count;
            for(int k=0;k<max;k++){
                str2[k]=str[j+k];
            }
         }
      }
      
}