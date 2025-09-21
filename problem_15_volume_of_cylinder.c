#include<stdio.h>
int main(){

    float radius,height,volume;

    printf("Enter the radius of the cylinder\t:\t");
    scanf("%f",&radius);

     printf("Enter the height of the cylinder\t:\t");
    scanf("%f",&height);

    volume=3.14*radius*radius*height;

    printf("The volume of the cylinder is\t:\t %.2f",volume);

return 0;
}

