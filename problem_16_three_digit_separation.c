#include<stdio.h>
int main(){

    int number,hundred_digit_number,ten_digit_number,one_digit_number,x;

    printf("Enter a three digit number\t:\t");
    scanf("%d",&number);

    hundred_digit_number=number/100;

    x=number%100;
    ten_digit_number=x/10;

    one_digit_number=x%10;

    printf("100 digit number is\t:\t %d\n",hundred_digit_number);
    printf("10 digit number is\t:\t %d\n",ten_digit_number);
    printf("1 digit number is\t:\t %d\n",one_digit_number);

return 0;
}
