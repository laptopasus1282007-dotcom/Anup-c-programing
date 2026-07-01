// write a program to acepect users marital status, gender and agevto check if he /she is eligible for marriage or not.
#include<stdio.h>
void main ()
{
    int status,gender,age;
    printf("welcome to shadi.com\n ");
    printf("1. single\n");
    printf("2. married\n");
    printf("select option : ");
    scanf("%d",&status);
    if(status == 1 )
    {
        printf("\n\nselect gender\n  ");
        printf("1. male\n");
        printf("2. female\n");
        printf("select option : ");
        scanf("%d",&gender);
        if(gender == 1)
        {
            printf("you select male\n");
            printf("enter your age : ");
            scanf("%d",&age);
            if(age>=21)
            {
                printf("you are eligible for marriage ");
                printf("\nand congrulation for marriage");
            }
            else
            {
                printf("not eligible for marriage ");
            }

        }
        else if(gender == 2)
        {
            printf("you select female \n");
            printf("enter your age : ");
            scanf("%d",&age);
            if(age>=18)
            {
                printf("you are eligible for marriage ");
                printf("\nand congrulation for marriage");
            }
            else
            {
                printf("not eligible for marriage ");
            }

        }
        else 
        {
            printf("invalid input");
        }
    }
    else if(status == 2)
    {
        printf("You are ready Joru ka gulam");
    }
    else
    {
        printf("Invalid input");
    }
} 