#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};
int main(){
    int n;
    scanf("%d",&n);
   struct Rectangle side[n];
   for(int i=0;i<n;i++){
    scanf("%d %d",&side[i].length,&side[i].breadth);
   }
   for(int i=0;i<n;i++){
    float a=side[i].length;
    float b=side[i].breadth;
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,a*b,2*(a+b));
   }
   return 0;
}