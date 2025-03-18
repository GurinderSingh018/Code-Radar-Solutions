#include<stdio.h>
#include<string.h>

struct subscription{
    char name[15];
    char type[44];
    float price;
};

int main(){
    int n;
    scanf("%d",&n);
    struct subscription mov[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",mov[i].name,mov[i].type,&mov[i].price);
    }
    float x=0,y=0,z=0;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(strcmp(mov[i].type,"Basic")==0){
            x+=mov[i].price;
            a++;
        }
        else if(strcmp(mov[i].type,"Standard")==0){
            y+=mov[i].price;
            b++;
        }
        else if(strcmp(mov[i].type,"Premium")==0){
            z+=mov[i].price;
            c++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",a,x,b,y,c,z);
    return 0;
}