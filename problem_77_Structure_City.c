#include<stdio.h>

    struct City{

        char name[100];
        float area,population;

    };

int main(){

    struct City cities[3];
    int i,citynumber;
    float density[3],highest;

    for(i=0;i<3;i++){

        printf("Enter the name of city number %d\t:\t",i+1);
        scanf("%[^\n]", cities[i].name);

        printf("Enter the population of city number %d\t:\t",i+1);
        scanf("%f",&cities[i].population);

        printf("Enter the area of city number %d\t:\t",i+1);
        scanf("%f",&cities[i].area);
    }

    for(i=0;i<3;i++){
        density[i]=cities[i].population/cities[i].area;
    }

    highest=density[0];

    for(i=0;i<3;i++){
        if(highest<density[i]){
            highest=density[i];
            citynumber=i;
        }
    }

    printf("%s is with the highest population density and the population density is %.2f",cities[citynumber].name,highest);


return 0;
}
