#include<stdio.h>
#include<math.h>
int main(){
int r;
float perimeter;
float pi = 3.1416;
printf("Enter the redius\n");
scanf("%d", &r);
perimeter = 2 * pi * r;
printf("The perimeter is %f ",perimeter);
return 0;
}