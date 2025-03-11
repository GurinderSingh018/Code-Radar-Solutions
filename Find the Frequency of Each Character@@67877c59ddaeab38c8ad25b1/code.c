#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%s",str);
    int n=strlen(str);
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=1;
    }
    
    for(int i=0;i<n;i++){
      int occ=1;
        if(arr[i]=0){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                occ++;
                arr[j]=0;
            }
        }
        arr[i]=occ;
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            printf("%c: %d\n",str[i],arr[i]);
        }
    }
}