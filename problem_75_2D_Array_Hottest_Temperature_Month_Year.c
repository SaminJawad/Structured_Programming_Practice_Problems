#include<stdio.h>
int main(){

    float temperature[5][12],hottesttemp;
    int i,j,year=0,month=0;

    for(i=1;i<=5;i++){
        for(j=1;j<=12;j++){
            printf("Enter %d months temperature of %d year\t:\t",j,i);
            scanf("%f",&temperature[i][j]);
        }
    }

    hottesttemp=temperature[0][0];

    for(i=1;i<=5;i++){
        for(j=1;j<=12;j++){
            if(hottesttemp<temperature[i][j]){
                hottesttemp=temperature[i][j];
                month=j;
                year=i;
            }
        }
    }

    printf("The hottest year is %d and the hottest month is %d",year,month);



return 0;
}
