#include<stdio.h>
#include<string.h>

void sort(char str[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}

int main(){
    char str1[50];
    char str2[50];
    
    scanf("%s",str1);
    scanf("%s",str2);
    int n=strlen(str1);
    sort(str1,n);
    sort(str2,n);
                                        
    int valid=1;
    for(int i=0;i<n;i++){
        if(str1[i]!=str2[i]){
            valid=0;
            break;
        }
        
    }
    if(valid){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}