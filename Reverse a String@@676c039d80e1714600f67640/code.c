#include <stdio.h>
#include<string.h>

int main() {
    char a[50];
    scanf("%s",&a);
    
    int c=strlen(a);
    for(int i=0;i<c/2;i++){
        int temp=a[i];
        a[i]=a[c-i-1];
        a[c-i-1]=temp;
        
    }
    printf("%s",a);
    return 0;
}