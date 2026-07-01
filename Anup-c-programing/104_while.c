// Write a program to takes a number as input and calculates the sum of its 
// individual digits.
#include<stdio.h>
void main ()
{
    int num , rem, res = 0;
    printf("Enter your Number : ");
    scanf("%d",&num);
    while (num > 0)
    {
        rem = num % 10;
        res = res + rem;
        num = num % 10;
    }
    printf("Sum of indivisuals Digit : %d",res);
}