// write a program that takess number aas input and counts how many digits 
// it contains.
#include<stdio.h>
void main () 
{
    int num , rem , res = 0;
    printf("enter your Number : ");
    scanf("%d",&num);
    while (num > 0)
    {
        res++;
        num = num /10;
    } 
    printf("%d",res);
}