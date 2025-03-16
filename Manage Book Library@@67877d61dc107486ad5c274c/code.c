#include<stdio.h>

struct Book{
    char name[50];
    char author[50];
    float price;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Book info[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",info[i].name,info[i].author,&info[i].price);
    }
    float p;
    scanf("%d",&p);
    printf("Books above price %.2f",p);
    for(int i=0;i<n;i++){
        if(info[i].price>p){
           printf("Title: %s, Author: %s, Price: %.2f\n",info[i].name,info[i].author,info[i].price);
        }
    }
    return 0;
}