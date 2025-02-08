#include <stdio.h>
#

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;

            }
        }
        
    }
    
    printf("%d",count);
    return 0;
}