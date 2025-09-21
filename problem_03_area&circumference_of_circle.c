#include<stdio.h>
int main(){

    float r,area,circumference;
    printf("Enter the value of radius\t");
    scanf("%f",&r);

    area = 3.1416*r*r;
    circumference = 2*3.1416*r;

    printf("The area of the circle is\t%.2f\n",area);
    printf("The circumference of the circle is:\t %.2f",circumference);

return 0;
}
