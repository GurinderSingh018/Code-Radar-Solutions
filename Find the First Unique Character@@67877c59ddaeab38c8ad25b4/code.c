#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int valid=0;
    char freq[n];
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }
    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(str[i]==str[j]){
                count++;
                
                freq[j]=0;
            }
        }
        freq[i]=count;
    }
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            printf("%c",str[i]);
            return 0;
        }
        
    }
    printf("-");
    
}