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
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, ",std[i].roll);
        printf("Name: %s, ",std[i].name);
        printf("Marks: %.2f\n",std[i].marks);
    }
    return 0;
}