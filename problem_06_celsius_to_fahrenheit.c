#include<stdio.h>
int main(){

    float celsius,fahrenheit;
    printf("Enter the value of celsius\t:");
    scanf("%f",&celsius);

    fahrenheit = (celsius*9/5)+32;

    printf("The value of celsius in fahrenheit is:\t %.2f",fahrenheit);

return 0;
}
