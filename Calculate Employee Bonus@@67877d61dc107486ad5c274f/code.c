#include<stdio.h>
struct salary{
    int id;
    char str[50];
    int salary;
};

int main(){
    int n;
    scanf("%d",&n);
    struct salary sal[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d",&sal[i].id,sal[i].str,&sal[i].salary);
    }
    
    for(int i=0;i<n;i++){
        float bonus;
        if(sal[i].salary>=50000){
            bonus= 0.1*sal[i].salary;
            
        }
        else{
            bonus=0.05*sal[i].salary;
           
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",sal[i].id,sal[i].str,bonus);
    }
    return 0;
}