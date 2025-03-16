#include<stdio.h>
#include<string.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
void sort(float arr[],int n){
       for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
       }
}
int main(){
    int n;
    scanf("%d",&n);
    struct Student std[n];
    float arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&std[i].roll);
        scanf("%s",std[i].name);
        scanf("%f",&std[i].marks);
        arr[i]=std[i].marks;
    }
    sort(arr,n);
                                         
    for(int i=0;i<n-1;i++){
       printf("%f\n",arr[i]);
    }
    
    return 0;
}