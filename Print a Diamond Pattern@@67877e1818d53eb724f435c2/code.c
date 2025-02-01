#include <stdio.h>


int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n-1;j++){
        printf(" ")
      }
      for(int x=1;x<=2*i-1;x++){
        printf("*");
      }
      printf("\n");
   }
   for (int k=1;k<n;k++){
       for(int j=1;j<=i;j++){
           printf(" ");
       }
       for(int x=1;x<=n;x--){
           printf("*");
       }
      }
    return 0;
}