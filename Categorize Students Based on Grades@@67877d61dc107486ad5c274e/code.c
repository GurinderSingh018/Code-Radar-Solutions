#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks; 
    char grade; 
};

int main(){
    int n;
    scanf("%d",&n);
    struct Student std[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&std[i].roll,std[i].name,&std[i].marks);
        if(std[i].marks>=85.0) {
          std[i].grade='A';
        }  
        else if(std[i].marks<85.0 && std[i].marks>=70.0) {
          std[i].grade='B';
        }
        else{
          std[i].grade='C'";
        }           
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Grade: %c\n",std[i].roll,std[i].name,std[i].grade);
    }

    return 0;
}