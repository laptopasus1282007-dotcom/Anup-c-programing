//how to take string sentence from user 
#include<stdio.h>
void main ()
{
    char name [30];
    printf("enter your name : ");
    scanf("%[^\n]", name );
    printf("name = %s",name);
}