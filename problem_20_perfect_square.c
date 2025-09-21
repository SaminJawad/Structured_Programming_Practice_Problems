#include <stdio.h>
#include <math.h>

int main(){

    float number,sqrt_num,integer_num;
    printf("Enter a number\t:\t");
    scanf("%f",&number);

    sqrt_num=sqrt(number);
    integer_num=(int)sqrt_num;

    if(integer_num*integer_num-number==0){
        printf("This is a perfect square");
    }

    else{
        printf("This is not a perfect square");
    }


    return 0;
}

