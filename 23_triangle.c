//write a peogram to calculate area of triangle.
#include<stdio.h>
void main ()
{
    float base,height,area;
    printf("enter a base = ");
    scanf("%f",&base);
    printf("enter a height = ");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("area is = %.2f",area);
}