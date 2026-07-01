// write a program to calculate area of circle.
#include<stdio.h>
void main ()
{
    float radius,area;
    printf("Enter a radius = ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("the area is = %.1f",area);
}