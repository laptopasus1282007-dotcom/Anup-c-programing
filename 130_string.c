//way to display each char of string like belove 
// akola
// a-k-o-l-a-
#include<stdio.h>
void main ()
{
    char name [] = "akola";
    int i;
    printf("string = %s\n",name);
    for(i = 0; name[i] !='\0'; i++)
    {
        printf("%c-", name[i]);
    }
}