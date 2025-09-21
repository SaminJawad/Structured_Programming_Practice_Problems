#include <stdio.h>
int main(){

    float x,y,z;

    printf("Enter the length of the 1st hand of the Triangle as x\t:\t");
    scanf("%f",&x);

    printf("Enter the length of the 2nd hand of the Triangle as y\t:\t");
    scanf("%f",&y);

    printf("Enter the length of the 3rd hand of the Triangle as z\t:\t");
    scanf("%f",&z);


    if(x==y && y==z){
        printf("The Triangle is Equilateral");
    }

    else if(x==y || x==z || y==z){
        printf("The Triangle is Isoceles");
    }

    else if(x!=y && y!=z){
        printf("The Triangle is Scalene.");
    }

    return 0;
}
