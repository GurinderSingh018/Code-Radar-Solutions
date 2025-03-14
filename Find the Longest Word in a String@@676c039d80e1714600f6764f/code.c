#include<stdio.h>

int main(){
      char str[50];
      char str2[50];
      fgets(str,sizeof(str),stdin);
      int count;
      int max=0;
      while(str[i]!='\0'){
        count =0;
         if(str[i]!=' '){
            count++;
         }
         if(max<count){
            max=count;
         }
      }
      
}