// Write a program to check given number is prime or not. 
#include<stdio.h>
void main ()
{
    int i, n, a=0;
    printf("Enter your Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a==2)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is Not Prime ");
    }
}
