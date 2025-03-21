#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int freq[n];
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }
    for(int i=0;i<n-1;i++){
        if(freq[i]==0){
            continue;
        }
        int c=0;
         for(int j=i;j<n;j++){
            if(str[i]==str[j]){
                
                c++;
                freq[j]=0;
            }
         }
         freq[i]=c;
         
    }

    for(int i=0;i<n;i++){
        if(freq[i]==1){
            printf("%c",str[i]);
            return 0;
        }
        
    }
    printf("-");
}