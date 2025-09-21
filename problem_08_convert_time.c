#include<stdio.h>
int main(){

    int time_in_minutes,hours,minutes;
    printf("Enter time in minutes:\t");
    scanf("%d",&time_in_minutes);

        hours=time_in_minutes/60;
        minutes=time_in_minutes%60;

    printf("Time in minutes converted to hours and minutes\t:\t %d hours & %d minutes",hours,minutes);


return 0;
}
