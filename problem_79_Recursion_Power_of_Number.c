#include<stdio.h>

    int ans(int base, int power){

        int calculation;

        if(power==0){
            return 1;
        }
        else{
            calculation=base*ans(base,power-1);
            return calculation;
        }
    }

int main(){

    int base_number,power_number,calculation;

    printf("Enter the base number\t:\t");
    scanf("%d",&base_number);

    printf("Enter the positive power number\t:\t");
    scanf("%d",&power_number);

    calculation=ans(base_number,power_number);

    printf("The value is\t:%d\t",calculation);

return 0;
}
