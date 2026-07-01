//write a program to print word according to number like 1 - one , 2 - two upto 10. 
#include<stdio.h>
void main()
{
    int num;
    printf("Enter your number = ");
    scanf("%d",&num);
    if (num == 1)
    {
        printf("One");
    }
    else if (num == 2)
    {
        printf("Two");
    }
    else if (num == 3)
    {
        printf("Three");
    }
    else if (num == 4)
    {
        printf("Four");
    }
    else if (num == 5)
    {
        printf("Five");
    }
    else if (num == 6)
    {
        printf("Six");
    }
    else if (num == 7)
    {
        printf("Seven");
    }
    else if (num == 8)
    {
        printf("Eight");
    }
    else if (num == 9)
    {
        printf("Nine");
    }
    else if (num == 10)
    {
        printf("Ten");
    }
    else
    {
        printf("Enter a correct Number 1 to 10");
    }
}