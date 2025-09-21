#include <stdio.h>
int main(){

    float x,y,z;

    printf("Enter the 1st angle of Tringle as x\t:\t");
    scanf("%f",&x);

    printf("Enter the 2nd angle of Triangle as y\t:\t");
    scanf("%f",&y);

    printf("Enter the 3rd angle of Tringle as z\t:\t");
    scanf("%f",&z);


    if(x+y+z==180){
        printf("The triangle is valid");
    }

    else{
        printf("The triangle is invalid");
    }

 return 0;
 }
