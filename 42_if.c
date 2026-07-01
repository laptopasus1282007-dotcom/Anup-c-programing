//write a program eligibile a personal choice .
#include<stdio.h>
void main ()
{
    int age;
    printf("enter your age = ");
    scanf("%d",&age);
    printf("you can drink a milk\n");
    if (age>=18)
    {
        printf("you can drink a desi daru\n");
        printf("you can vote\n");
        printf("you can drive\n");
        printf("you are eligible for marriage\n");
    }
    printf("you can play a free fire");
}