#include<stdio.h>

struct Book{
    char name[50];
    char author[50];
    float price;
}

int main(){
    int n;
    scanf("%d",&n);
    struct Book info[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",info[i].name,info[i].author,&info[i].price);
    }
    int p;
    scanf("%d",&p);
    for(int i=0;i<n;i++){
        if(info[i].price>p){
           printf("Title: %s, Author: %s, Price: %.2f\n",info[i].name,info[i].author,info[i].price)
        }
    }
}