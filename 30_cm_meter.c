//write a program to convert cm into meter.
#include<stdio.h>
void main ()
{ 
    float cm,meter;
    printf("Enter a cm = ");
    scanf("%f",&cm);
    meter=cm/100;
    printf("Cm into meter is = %.0f meter",meter);
}