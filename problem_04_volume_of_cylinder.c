#include<stdio.h>
int main(){

    float r,h,volume;
    printf("Enter the value of radius\t");
    scanf("%f",&r);
    printf("Enter the value of height\t");
    scanf("%f",&h);

    volume = 3.1416*r*r*h;

    printf("The volume of the cylinder is:\t %.2f",volume);

return 0;
}
