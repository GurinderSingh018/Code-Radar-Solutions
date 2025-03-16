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
       for(int j=0;j<n-i-1;j++){
        if(std[j].marks<std[j+1].marks){
            struct Student temp = std[j+1];
            std[j+1]=std[j];
            std[j]=temp;
        }
       }
    }
    for(int j=0;j<n;j++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",std[j].roll,std[j].name,std[j].marks);
    }
    return 0;
}