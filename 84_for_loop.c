// Write a program to display number cube 1 to n (given number).
#include<stdio.h>
void main ()
{
    int i,n ;
    printf("Enter your number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }
}