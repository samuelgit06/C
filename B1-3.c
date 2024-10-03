#include<stdio.h>
#include<math.h>
int main(void){

    int D ,сумм,произ;

    printf("enter a three digit number");
    scanf("%d",&D);
    
    if(D<100||D>999){
        printf("enter another number");
    }

    int H=D/100;
    int T=(D/10)%10;
    int U=D%10;

    сумм=H+T+U;
    произ=H*T*U;

    printf("сумма :%d",сумм);
    printf("произведение:%d",произ);


}