//Write  a program to convert in km into meter.
#include<stdio.h>
void main ()
{
    float km,meter;
    printf("Enter a km = ");
    scanf("%f",&km);
    meter=km*1000;
    printf("meter in  km = %.0f meter",meter);
}