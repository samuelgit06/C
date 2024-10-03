#include<stdio.h>

int main(){

    int a,b,c;

     printf("enter a:");
    scanf("%d",&a);

     printf("enter b:");
    scanf("%d",&b);

     printf("enter c:");
    scanf("%d",&c);

    if(a+b>c && a+c>b && b+c>a){
        printf("le triangle existe");

    }else{
        printf("le triangle n'existe pas");
    }

    return 0;
}