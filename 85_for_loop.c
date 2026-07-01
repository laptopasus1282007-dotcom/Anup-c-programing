// Write a program to display table of given number.
#include<stdio.h>
void main ()
{
    int i,n;
    printf("Enter your Number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}