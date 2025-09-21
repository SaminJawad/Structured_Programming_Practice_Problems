#include<stdio.h>

    int lowest(int *number, int n){

        int lowest,i;
        lowest=number[0];

        for(i=0;i<n;i++){
            if(lowest>number[i]){
                lowest=number[i];
            }
        }
        return lowest;
    }

int main(){

    int number[100],n,i,y;

    printf("Enter how many numbers you want to input to find the lowest above them\t:\t");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the numbers\t:\t");
        scanf("%d",&number[i]);
    }

    y=lowest(number,n);

    printf("%d is the lowest above them",y);

return 0;
}
