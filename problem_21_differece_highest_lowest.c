
#include <stdio.h>
int main(){

    float x,y,z,diff;

    printf("Enter the 1st number as x\t:\t");
    scanf("%f",&x);

    printf("Enter the 2nd number as y\t:\t");
    scanf("%f",&y);

    printf("Enter the 3rd number as z\t:\t");
    scanf("%f",&z);

   if(x>y && x>z){

        if(y<z){
        diff=x-y;
        }

        else if(z<y){
        diff=x-z;
        }
   }

    else if(y>x && y>z){

        if(x>z){
        diff=y-z;
        }

        else if(x<z){
        diff=y-x;
        }
   }

    else if(z>x && z>y){

        if(x<y){
            diff=z-x;
        }

        else if(x>y){
            diff=z-y;
        }

    }

  printf("The difference is\t:\t%.2f\n",diff);


return 0;
}
