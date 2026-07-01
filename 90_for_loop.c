//Write a program to display sum 1 to n ( given number). 
#include<stdio.h>
void main ()
{
    int i,res=0;
    int n;
    printf("enter your Number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        res = res + i;
    }
    printf("sum of 1 to num : %d\n",res);
}