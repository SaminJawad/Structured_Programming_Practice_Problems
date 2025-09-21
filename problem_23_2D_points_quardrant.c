#include <stdio.h>
int main(){

    int x,y;
    printf("Enter 2D points X-axis value\t:\t");
    scanf("%d",&x);

    printf("Enter 2D points Y-axis value\t:\t");
    scanf("%d",&y);

    if(x>0){

        if(y>0){
             printf("1st quadrant");
        }

        else if(y<0){
         printf("4th quadrant");
        }

        else if(y==0){
            printf("Positive x-axis");
        }

    }

    if(x<0){

        if(y>0){
              printf("2nd quadrant");
        }

        else if(y<0){
            printf("3rd quadrant");
        }

        else if(y==0) {
            printf("Negative x-axis");
        }

    }

    if(x==0){

        if(y>0){
            printf("Positive y-axis");
        }

        else if(y<0){
                printf("Negative y-axis");
            }

        else if(y==0){
                printf("Origin");
            }

    }

return 0;
}
