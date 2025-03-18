#include<stdio.h>
struct salary{
    int id;
    char str[50];
    int salary;
}

int main(){
    int n;
    scanf("%d",&n);
    struct salary sal[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d",&sal[i].id,sal[i].str,&sal[i].salary);
    }
    float bonus;
    for(int i=0;i<n;i++){

        if(sal[i].salary>50000){
            bonus= sal[i].salary*10/100;
            printf("Employee ID: %d, Name: %s,Bonus: %.2f",sal[i].id,sal[i].str,bonus);
        }
        else{
            bonus= sal[i].salary*5/100;
            printf("Employee ID: %d, Name: %s,Bonus: %.2f",sal[i].id,sal[i].str,bonus);
        }
    }
    return 0;
}