#include<stdio.h>
int main(){

    float person,my_turn,x;

    printf("Enter the number which person you are in the line\t");
    scanf("%f",&person);

    x=person/8;
    my_turn=ceil(x);

    printf("my turn number is\t %.0f",my_turn);

return 0;
}
