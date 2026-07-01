//write a program to calculate area of rectangle.
#include<stdio.h>
void main ()
{
    float length,width,area;
    printf("enter a Length = ");
    scanf("%f",&length);
    printf("Enter a Width = ");
    scanf("%f",&width);
    area=length*width;
    printf("The area is  = %.1f",area);
}