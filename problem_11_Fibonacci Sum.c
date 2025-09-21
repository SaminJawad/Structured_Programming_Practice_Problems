#include<stdio.h>
int main(){

    int i,n,first,second,third,sum;

    first=0;
    second=1;

    sum=0;

    printf("Enter how many number of fibonacchi series you want to sum\t:\t");
    scanf("%d",&n);


    printf("The fibonacchi series is\t:\t");

    for(i=0;i<n;i++){

        printf("%d\t",first);

        third= first + second;

        sum=sum + first;

        third= first + second;

        first = second;
        second=third;


    }

    printf("\nThe sum value of first %d fibonacchi numbers are\t:\t%d",n,sum);


return 0;
}
