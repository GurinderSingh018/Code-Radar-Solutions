#include<stdio.h>
#include<string.h>
struct Vehicle{
    char num[10];
    char type[10];
    int amount;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Vehicle veh[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",veh[i].num,veh[i].type,&veh[i].amount);
    }
    float X=0,Y=0,Z=0;
    for(int i=0;i<n;i++){
        if(strcmp(veh[i].type,"Car")==0){
            X=X+veh[i].amount;
        }
        else if(strcmp(veh[i].type,"Truck")==0){
            Y=Y+veh[i].amount;
        }
        else{
            Z=Z+veh[i].amount;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",X,Y,Z);
    return 0;
}