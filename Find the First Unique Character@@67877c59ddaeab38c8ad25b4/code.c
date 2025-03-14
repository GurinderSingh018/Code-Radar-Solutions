#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    int valid=0;
    char freq[n];
    for(int i=0;i<n;i++){
        freq[i]=0;
    }
    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(str[i]==str[j]){
                count++;
                freq[i]=count;
                freq[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]==1){
            printf("%c",str[i]);
            return 0;
        }
        
    }
    printf("-");
    
}