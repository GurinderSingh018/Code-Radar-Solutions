#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    float marks;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Student std[n];
    for(int i=0;i<n;i++){
        scanf("%d",&std[i].roll);
        scanf("%s",std[i].name);
        scanf("%f",&std[i].marks);
    }
    int m;
    scanf("%d",&m);
    int i;
    for(i=0;i<n;i++){
        if(std[i].roll==m){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",std[i].roll,std[i].name,std[i].marks);
            return 0;
        }
    }
}