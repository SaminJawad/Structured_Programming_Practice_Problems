#include<stdio.h>
int main(){

    int i,j,n,counter;

    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int temp[n];

    counter=0;

    for(i=0;i<n;i++){
        printf("Enter the temperatures\t:\t");
        scanf("%d",&temp[i]);
    }

    for(j=1;j<n;j++){
        if(temp[j]>temp[j-1]){
            counter=counter+1;

            printf("%d number day has higher temperature than previous day\n",j);
        }
    }

    printf("There are %d numbers of days which have higher temperature than their previous day",counter);


return 0;
}
