//visit string all char using for loop and null char .
#include<stdio.h>
void main ()
{
    char name [] = "my name is anup wasankar";
    int i;
    for(i=0;name[i] !="\0";i++)
    {
        printf("%c\n",name[i]);
    }
}
