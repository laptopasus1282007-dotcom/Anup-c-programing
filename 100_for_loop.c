//Write a program to display factorial of given number. 
#include<stdio.h>
void main ()
{
    int i,n;
    printf("enter your Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n % i ==0)
        {
            printf("%d",i);
        }
    }
}
