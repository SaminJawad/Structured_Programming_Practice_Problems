#include<stdio.h>
int main(){

    int A,B,C,D;
    float diff_1,diff_2,ratio;

    printf("Enter 4 integers values serially\nA\nB\nC\nD\n");
    scanf("%d%d%d%d",&A,&B,&C,&D);

        diff_1=A-B;
        diff_2=C-D;

        ratio=diff_1/diff_2;

    printf("The ratio between differences of first two numbers and last two numbers is\t:\t %.0f\t:\t%.0f\n",diff_1,diff_2);

    printf("The ratio between differences of first two numbers and last two numbers in devided formate is\t %.2f",ratio);



return 0;
}
