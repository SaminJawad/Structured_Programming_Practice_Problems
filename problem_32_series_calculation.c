#include<stdio.h>
#include<math.h>
int main(){

    float N,i,calculation;

    printf("Enter an odd number\t:\t");
    scanf("%f",&N);

    calculation=0;

    for(i=3;i<=N;i=i+2){

        calculation=calculation + pow((i/2),2);

    }

    printf("The calculated value of this series is \t:\t %.2f",calculation);

return 0;
}
