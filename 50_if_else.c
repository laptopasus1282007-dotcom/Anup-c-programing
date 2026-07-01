// write a program to check given number in range 0f 100-200.
#include<stdio.h>
void main ()
{
    int num;
    printf("enter your number : ");
    scanf("%d",&num);

    if (num >= 100 && num <= 200) 
    {
        printf("number is range (100-200)");

    }
    else
    {
        printf("number is not range (100-200)");
    }
}