#include<stdio.h>
int main(){

    int hours,minutes,running_time_in_minutes;
    float fractional_time_format,converting_to_minutes;

    printf("Input the running hours time of the movie\n");
    scanf("%d",&hours);

    printf("Input the running minutes time of the movie\n");
    scanf("%d",&minutes);

        running_time_in_minutes=(hours*60)+minutes;

    printf("The running time of the movie in minutes is\t:\t %d\n",running_time_in_minutes);

    converting_to_minutes=(hours*60)+minutes;

    fractional_time_format=converting_to_minutes/60;

    printf("running time in fractional hour format is\t:\t %.2f",fractional_time_format);



return 0;
}
