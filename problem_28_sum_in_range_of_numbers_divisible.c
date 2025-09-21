#include<stdio.h>
int main(){

    int starting_num,ending_num,sum_of_div_5,sum_of_div_7,sum_of_div_13;

    printf("Enter the starting value of the range\n");
    scanf("%d",&starting_num);

    printf("Enter the ending value of the range\n");
    scanf("%d",&ending_num);

    sum_of_div_5=0;
    sum_of_div_7=0;
    sum_of_div_13=0;

        for(starting_num;starting_num<=ending_num;starting_num++){

            if(starting_num%5==0){
                sum_of_div_5=sum_of_div_5+starting_num;
            }

            if(starting_num%7==0){
                sum_of_div_7=sum_of_div_7+starting_num;
            }

            if(starting_num%13==0){
                sum_of_div_13=sum_of_div_13+starting_num;
            }

        }

    printf("The sum of the numbers from %d to %d is %d\n",starting_num,ending_num,sum_of_div_5);
    printf("The sum of the numbers from %d to %d is %d\n",starting_num,ending_num,sum_of_div_7);
    printf("The sum of the numbers from %d to %d is %d\n",starting_num,ending_num,sum_of_div_13);



return 0;
}
