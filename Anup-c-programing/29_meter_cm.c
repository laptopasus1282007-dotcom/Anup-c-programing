//write a program to convert in meter into cm.
#include<stdio.h>
void main ()
{
    float meter,cm;
    printf("Enter a meter = ");
    scanf("%f",&meter);
    cm=meter*100;
    printf("meter into cm is = %.0f cm",cm);
}