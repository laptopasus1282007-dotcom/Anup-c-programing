
//Write a program convert meter into km.
#include<stdio.h>
void main ()
{
    float meter,km;
    printf("Enter in meter = ");
    scanf("%f",&meter);
    km=meter/1000;
    printf("meter into Km is = %.1f km",km);
}