// Write a program to check given number is perfact or not. 
#include<stdio.h>
void main ()
{
int i,n,a=0;
printf("enter your Number : ");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
    if(n % i ==0)
    {
        a = a +i;

    }
}
if(a==n)
{
    printf("Number is Perfect ");

}
else
{
    printf("Number is not perfect ");
}
}