#include<stdio.h>
struct salary{
    int id;
    char str[50];
    float salary;
};

int main(){
    int n;
    scanf("%d",&n);
    struct salary sal[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&sal[i].id,sal[i].str,&sal[i].salary);
    }
    float bonus;
    for(int i=0;i<n;i++){
        
        if(sal[i].salary>50000){
            bonus= sal[i].salary*0.10;
            
        }
        else{
            bonus= sal[i].salary*0.05;
           
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",sal[i].id,sal[i].str,bonus);
    }
    return 0;
}