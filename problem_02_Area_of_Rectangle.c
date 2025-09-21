#include<stdio.h>
int main(){

    float lenght,breadth,area;
    printf("Enter the value of lenght & breadth\n");
    scanf("%f%f",&lenght,&breadth);


    area = lenght*breadth;

    printf("The area of the rectangle is: %.2f\t",area);

return 0;
}
