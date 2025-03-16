#include<stdio.h>

struct rectangle
{
    int length;
    int breadth;
};
int main(){
    int n;
    scanf("%d",&n);
   struct rectangle side[n];
   for(int i=0;i<n;i++){
    scanf("%d %d",side[i].length,side[i].breadth);
   }
   for(int i=0;i<n;i++){
    int a=side[i].length;
    int b=side[i].breadth;
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",i+1,a*b,2*(a+b));
   }
   return 0;
}