#include<stdio.h>
int main(){

    int num,i,factorial,sum,initial;

    printf("Enter a integer number\t:\t");
    scanf("%d",&num);

    factorial=1;
    sum=0;
    initial=num;

    for(i=1;i<=num;i=i+1){

        factorial=factorial*i;

    }

    printf("The factorial of %d is\t:\t%d\n",num,factorial);

    for(num;num<=factorial;num=num+1){

        if(num%2==0){

            sum=sum+num;

        }

    }

    printf("The sum of the even number between %d and %d is \t:\t%d",initial,factorial,sum);


return 0;
}
