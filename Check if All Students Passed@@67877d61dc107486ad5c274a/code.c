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
    int valid=0;                                  
    for(int i=0;i<n;i++){
       if(std[i].marks>50.00){
        valid=1;
       }
       else{
        valid=0;
        break;
       }
    }
    if(valid){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
    return 0;
}