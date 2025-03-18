#include<stdio.h>
#include<string.h>

struct MovieTicket{
    char name[15];
    char type[44];
    int price;
};

int main(){
    int n;
    scanf("%d",&n);
    struct MovieTicket mov[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",mov[i].name,mov[i].type,&mov[i].price);
    }
    float x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        if(strcmp(mov[i].type,"Standard")==0){
            x=mov[i].price+x;
        }
        else if(strcmp(mov[i].type,"Premium")==0){
            y=mov[i].price+y;
        }
        else{
            z=z+mov[i].type;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",x,y,z);
    return 0;
}