#include<stdio.h>
#include <math.h>
int main(){
    float x1,x2,y1,y2,distaince;
    printf("Enter x1 and x2 :");
    scanf("%f %f",&x1,&x2);
    printf("Enter y1 and y2 :");
    scanf("%f %f",&y1,&y2);
    distaince = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
    printf("The distaince is %f", distaince);
    return 0;

}