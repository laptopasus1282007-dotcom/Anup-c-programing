//Write a program to display factors count of given number. 
#include<stdio.h>
void main ()
{
    int i,n,a=0;
    printf("Enter your Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n % i==0)
        {
            a++;
        }
    }
    printf("The factors count of %d = %d",n, a);
}
