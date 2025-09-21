#include<stdio.h>
int main(){

    float principle,rate,time,simple_interest;
    printf("Enter the value of Principle\t:");
    scanf("%f",&principle);

    printf("Enter the value of rate\t:");
    scanf("%f",&rate);

    printf("Enter the value of time\t:");
    scanf("%f",&time);

    simple_interest = principle*rate*time/100;

    printf("the value of simple interest is:\t %.2f",simple_interest);

return 0;
}
