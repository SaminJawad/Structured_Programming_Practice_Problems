#include<stdio.h>
int main(){

    float travel_km,bill_1,bill_2,total_bill,waiting_time,rounded_km;

    printf("Enter the travel distance in km\t:\t");
    scanf("%f",&travel_km);

    printf("Enter the waiting time in minutes\t:\t");
    scanf("%f",&waiting_time);

    rounded_km=ceil(travel_km);

    bill_1=rounded_km*25;
    bill_2=waiting_time*5;

    total_bill=bill_1+bill_2;

    printf("total bill is\t:\t %.2f",total_bill);

return 0;
}

