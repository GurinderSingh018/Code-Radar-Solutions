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
        scanf("%d",&std[i].roll);
        scanf("%s",std[i].name);
        scanf("%f",&std[i].marks);
    }
    float m;
    scanf("%f",&m);
    int count=0;
    for(int i=0;i<n;i++){
        if(std[i].roll>n){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}