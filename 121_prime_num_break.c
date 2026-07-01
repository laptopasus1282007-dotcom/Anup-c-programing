#include<stdio.h>
void main ()
{
    int num, c=0,i;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num % i==0 )
        {
            c++;
        }
        if(c > 2)
        {
            break;
        }

    }
    if(c== 2)
    {
        printf("num is Prime");

    }
    else
    {
        printf("num is not Prime");
    }
}