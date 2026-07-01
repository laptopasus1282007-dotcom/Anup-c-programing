// Write a program to display table of given number.
#include<stdio.h>
void main ()
{
    int i,s,e;
    printf("Enter Your Starting Number : ");
    scanf("%d",&s);
    printf("Emter your Ending Number : ");
    scanf("%d",&e);
    for(i=s;i<=e;i++)
    {
        printf("%d \n",i);
    }
}