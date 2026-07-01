// wap to print 1 to 50 even number.
#include<stdio.h>
void main()
{
    int i=1;
    anup:

    if (i % 2 ==0)
    {
        printf("%d\n",i);
    }
    i++;
    if(i <=50)
    {
        goto anup; 
    }
}