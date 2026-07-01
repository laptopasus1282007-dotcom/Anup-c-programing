//write a program to calculate area of square.
#include<stdio.h>
void main ()
{
    float side,area;
    printf("Enter a side value = ");
    scanf("%f",&side);
    area=side*side;
    printf("area is = %.1f",area);
}