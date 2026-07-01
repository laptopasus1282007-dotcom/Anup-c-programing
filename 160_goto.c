//wap to print 5 time msg goto statement
#include<stdio.h>
void main ()
{
    int i =1;
    
    start:
    
    printf("Anup wasankar\n");

    i++;

    if (i<= 5)

    {
        goto start ;
    }
}