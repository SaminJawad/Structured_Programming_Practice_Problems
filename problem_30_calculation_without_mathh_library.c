#include<stdio.h>
int main(){

    float a,b,c,d,i,p,q,calculation_1,calculation_2;

    printf("Enter the value of a\t:\t");
    scanf("%f",&a);

    printf("Enter the value of b\t:\t");
    scanf("%f",&b);

    printf("Enter the value of c\t:\t");
    scanf("%f",&c);

    printf("Enter the value of d\t:\t");
    scanf("%f",&d);

    i=1;
    p=0;
    q=0;
    calculation_2=1;

    for(p;p<b;p=p+1){

        i=i*a;

    }

    calculation_1=i/c;

    for(q;q<d;q=q+1){

        calculation_2=calculation_2*calculation_1;

    }

    printf("The calculation is\t:\t %.2f",calculation_2);


return 0;
}
