#include <stdio.h>
int main(){

    int x;

    printf("Enter his/her age\t:\t");
    scanf("%d",&x);

    if(x>=18){
        printf("He/She is a voter");
    }

    else{
        printf("He/She is not a voter");
    }

return 0;
}
