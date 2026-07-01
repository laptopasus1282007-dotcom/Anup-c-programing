// write a program to cheak given num even or odd .
#include<stdio.h>
void main ()
{
    int num;
    printf("enter your number = ");
    scanf("%d",&num);
    switch (num%2==0)
    {
        case 0 : printf("num is odd");break;
        case 1 : printf("number is even");break;
    }

}
