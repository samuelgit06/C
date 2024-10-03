#include<stdio.h>
#include<math.h>

int main(void){

    double a,b,c,d;
    double D=sqrt(pow(c-a,2)+pow(d-b,2));
    
    prinft("введите координаты a :");
    scanf("%f",&a);

    prinft("введите координаты b :");
    scanf("%f",&b);

    prinft("введите координаты c:");
    scanf("%f",&c);

    prinft("введите координаты d :");
    scanf("%f",&d);

    printf("длина AB=%f",D);
    return 0;


}