//Write a program to accept a number and check if it is positive , nagative or zero.
#include<stdio.h>
void main  ()
{
    int num;
    printf("Enter your number = ");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("number is zero");
    }
    else if (num > 0)
    {
        printf("num is positive");

    else    
    {
        printf(" number is negative"); 
    }
}