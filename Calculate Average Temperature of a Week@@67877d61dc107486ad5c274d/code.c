#include<stdio.h>

struct Day{
    char str[10];
    int temp;
};

int main(){
    struct Day day[7];
    for(int i=0;i<7;i++){
        scanf("%s %d",day[i].str,&day[i].temp);
    }
    float sum=0;
    for(int i=0;i<7;i++){
        sum=sum+day[i].temp;
    }
    printf("Average Temperature: %.2f",sum/7);
    return 0;
}