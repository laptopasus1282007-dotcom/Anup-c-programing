#include<stdio.h>
void main ()
{
    float num1,num2,res;
    printf("This is a Multiplication Calculator\n");
    printf("Enter your first num = ");
    scanf("%f",&num1);
    printf("Enter your second num = ");
    scanf("%f",&num2);
    res=num1*num2;
    printf("This is your multiplication = %.1f",res);
}         