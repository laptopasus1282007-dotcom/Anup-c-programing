// write a program to accept two number from user and display greatest number.
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter a num b : ");
    scanf("%d",&b);
    if (a > b)
    {
        printf("greatest num a = %d",a);
    }
    else
    {
        printf("greatest num b = %d",b);
    }
}