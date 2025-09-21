#include <stdio.h>
int main(){

    float x,y,z;

    printf("Enter the 1st hand of Triangle as x\t:\t");
    scanf("%f",&x);

    printf("Enter the 2nd hand of Tringle as y\t:\t");
    scanf("%f",&y);

    printf("Enter the 3rd hand of Triangle as z\t:\t");
    scanf("%f",&z);

    if(x+y>z && y+z>x && z+x>y){
        printf("This is a valid tringle");
    }

    else{
        printf("This is not a valid tringle");
    }

    return 0;
}
