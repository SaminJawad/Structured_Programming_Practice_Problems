#include<stdio.h>
int main(){

    int value,square,cube;
    printf("Enter a number");
    scanf("%d",&value);

    square = value*value;
    cube = value*value*value;

    printf("The square of this number is\t %d\n",square);
    printf("The cube of this number is\t %d",cube);


return 0;
}
