//Write a program to display sum 1 to n  ( given number) only multiple of 5 
//numbers sum.
#include<stdio.h>
void main ()
{
    int i,res= 0;
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i % 5==0)
        {
            res = res +i;
        }
    }
    printf("sum of 1 to num only multiply of 5 : %d",res);

}