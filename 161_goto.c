//wap to print 1 to 10 msg using goto statement.
#include<stdio.h>
void main ()
{
    int i = 1;
    
    anup:

    printf("%d\n",i);
    i++;
    if(i<=10)
    {
        goto anup;

    }
}