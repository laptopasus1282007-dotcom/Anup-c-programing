#include<stdio.h>
void main ()
{
    float num1,num2,res;
    printf("This your Substraction calculator\n");
    printf("Enter your first number = ");
    scanf("%f",&num1);
    printf("Enter your second number = ");
    scanf("%f",&num2);
    res=num1-num2;
    printf("This your Substraction = %.1f",res);
}