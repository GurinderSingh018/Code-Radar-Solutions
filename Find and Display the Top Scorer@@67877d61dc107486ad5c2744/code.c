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
    float top_s=0;
    int a;
    for(int i=0;i<n;i++){
        if(std[i].marks>top_s){
            top_s=std[i].marks;
            a=i;
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",std[a].roll,std[a].name,std[a].marks);
}