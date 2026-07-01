// write a program to cheak number is positive or negative.
#include<stdio.h>
void main ()
{
    int num;
    printf("Enter your numbetr : ");
    scanf("%d",&num);
    if(num >= 0)
    {
        printf("number is positive"); 
    }
    else
    {
        printf("Number is negative");
    }
}