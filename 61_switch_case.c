//write a progeram to make simple calculator.
// press 1 to addition
// press 2 to subtraction
// press 3 to multiplication 
// press 4 to division
#include<stdio.h>
void main ()
{
    int num,a,b,c;
    printf("--------welcome to my calculator--------\n");
    printf("    press 1 to addition\n");
    printf("    press 2 to addition\n");
    printf("    press 3 to addition\n");
    printf("    press 4 to addition\n");
    printf("    choose any option : ");
    scanf("%d",&num);
    switch (num)
    {
        case 1 :
        printf("you choose a addition number app : \n");
        printf("enter a first number : ");
        scanf("%d",&a);
        printf("enter a second a number : ");
        scanf("%d",&b);
        c =a + b;
        printf("addtion : %d\n",c);
        break;
        case 2 : 
        printf("you choose a substraction number app : \n");
        printf("Enter a first number : ");
        scanf("%d",&a);
        printf("enter a second number : ");
        scanf("%d",&b);
        c = a - b;
        printf("substraction : %d\n",c);
        break;
        case 3 : 
        printf("you choose a multiplication number app : \n");
        printf("enter a first number : ");
        scanf("%d",&a);
        printf("enter a second number : ");
        scanf("%d",&b);
        c = a * b;
        printf("multipilcation : %d\n",c);
        break;
        case 4 : 
        printf("Enter a first number : ");
        scanf("%d",&a);
        printf("enter a second number : ");
        scanf("%d",&b); 
        c = a / b;
         printf("division : %d\n",c);
        break;
        default:
        printf("please enter 1 to 4 any number "); 

    }
}