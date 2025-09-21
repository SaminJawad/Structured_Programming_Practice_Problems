#include <stdio.h>
int main(){

    float salary,gross_salary;

    printf("Enter your salary\t:\t");
    scanf("%f",&salary);

    if(salary<= 10000){
       gross_salary = salary + (salary*0.2) + (salary*0.8);
    }

    else if(salary>10000 && salary<=20000){
    gross_salary = salary + (salary*0.25) + (salary*0.9);
    }

    else if(salary>20000){
    gross_salary = salary + (salary*0.3)+(salary*0.95 );
    }

    printf("Your gross salary is\t:\t%.2f",gross_salary);

return 0;
}

