// Write a program to display even number series.
#include<stdio.h>
void main ()
{
    int i,n;
    printf("enter your number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i % 2==0)
    {
        printf("%d\n",i);
    }
    }
}