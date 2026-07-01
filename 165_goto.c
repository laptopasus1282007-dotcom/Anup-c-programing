// wap to print 1 to 10 msg using goto statement.
#include<stdio.h>
void main ()
{
    int i = 1;
anup1:
    printf("%d\n",i);
    i++;
    if (i <=10)
    {
        goto anup1;

    }
    goto anup2;
    printf("I am Studing a btech \n");
    printf("I am from Akola\n");
    printf("I am 19 years old\n");
    anup2:
    printf("I like play cricket\n");


}