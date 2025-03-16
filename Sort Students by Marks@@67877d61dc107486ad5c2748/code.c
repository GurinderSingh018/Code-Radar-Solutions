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
                                         
    for(int i=0;i<n-1;i++){
        int max;
        for(int j=i+1;j<n;j++){
            if(std[i].marks>std[j].marks){
                max=
            }
        }
        
    }
    
    return 0;
}