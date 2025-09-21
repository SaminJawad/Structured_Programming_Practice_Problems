#include<stdio.h>
int main(){

    int hour,minute,angle_1,angle_2,angle_diff;

    printf("Enter the time's hour between 1 to 12\t:\t");
    scanf("%d",&hour);

    printf("Enter the time's minute\t:\t");
    scanf("%d",&minute);


    angle_1=(hour*30)+(minute*0.5);
    angle_2=(minute*6);

    angle_diff=angle_1-angle_2;

    printf("angle formed by an anlog clock's two hands\t:\t %d",angle_diff);

return 0;
}
