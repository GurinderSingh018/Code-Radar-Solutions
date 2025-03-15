#include<stdio.h>
#include<string.h>
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
        std[i].roll=scanf("%d",&std[i].roll);
        std[i].name=scanf("%s",&std[i].roll);
        std[i].marks=scanf("%f",&std[i].roll);
    }
}