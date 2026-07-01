// Write a program to display sum 1 to n  ( given number) only even numbers sum.
#include<stdio.h>
void main ()
{
    int i, res =0;
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i % 2 ==1)
        {
            res = res + i;
        }
    }
    printf("sum of 1 to num  only odd number : %d",res);
}