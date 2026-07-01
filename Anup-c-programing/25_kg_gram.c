// write a program to convert kg into gram.
#include<stdio.h>
void main ()
{
    float kg,gram;
    printf("enter in kg = ");
    scanf("%f",&kg);
    gram=kg*1000;
    printf("kg in gram = %.0f gram",gram);
}