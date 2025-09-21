#include<stdio.h>
int main(){

    float CGPA[100],sum,avg;
    int counter,i,j,n;

    counter=0;
    sum=0;

    printf("Enter how many CGPA you want to input\t:\t");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter CGPA\t:\t");
        scanf("%f",&CGPA[i]);

        sum=sum+CGPA[i];
    }

    avg=sum/n;

    for(i=0;i<n;i++){
        if(CGPA[i]>=avg){
            counter++;
        }
    }
        printf("%d numbers of students have secured above average CGPA",counter);

return 0;
}
