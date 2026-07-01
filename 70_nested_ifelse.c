//check if a number is even-positive,even nagative,odd-positive,odd-negative or zero.
#include<stdio.h>
void main ()
{
    int num;
    printf("enter your number : ");
    scanf("%d",&num);
    if(num == 0)
    {
        printf("Number is zero");
    }
    else if (num % 2==0) 
    {
        if(num>0)
        {
            printf("Number is even-positive");
        }
        else
        {
            printf("Number is even-negative");
        }
    }
    else
    {
        if(num > 0)
        {
            printf("Number is odd-positive");

        }
        else
        {
            printf("Number is odd-negative");
        }
    }
}