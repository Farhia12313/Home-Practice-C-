#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("Enter three sides of triangle :");
    scanf("%f %f %f", &a,&b,&c);
    s = 0.5 * (a+b+c);
    area = sqrt (s*(s-a)*(s-b)*(s-c));
    printf("The area of a triangle is %f:", area);
    return 0;

}