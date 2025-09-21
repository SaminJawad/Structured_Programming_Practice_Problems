#include <stdio.h>
int main(){

    float income,tax;

    printf("Enter the total amount of your income\t:\t");
    scanf("%f",&income);

    if(income<=150000){
        printf("You have no tax to pay");
    }
    else if(income>150000 && income<=300000){
        tax=(income-150000)*0.1;
    }
    else if(income>300000 && income<=500000){
        tax=(income-300000)*0.2 + (150000*0.1);
    }
    else if(income>500000){
        tax=(income-500000)*0.3 + (200000*0.2) + (150000*0.1);
    }

    printf("Your income tax is\t:\t%.2f",tax);

    return 0;
}
