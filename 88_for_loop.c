//Write a program to display odd number series. 
#include<stdio.h>
void main ()
{
    int i,n;
    printf("Enter your Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i % 2==1)
        {
            printf("%d\n",i);
        }
    }
}