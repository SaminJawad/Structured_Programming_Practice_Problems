#include<stdio.h>
int main(){

    float km,meter,feet,inches,centimeter;
    printf("Enter the distance in kilometers\n");
    scanf("%f",&km);

    meter=km*1000;
    feet=km*3280.84;
    inches=km*39370.1;
    centimeter=km*100000;

    printf("Distance in meter:\t %.2f\n",meter);
    printf("Distance in feet:\t %.2f\n",feet);
    printf("Distance in inches:\t %.2f\n",inches);
    printf("Distance in centimeter:\t %.2f",centimeter);

return 0;
}
