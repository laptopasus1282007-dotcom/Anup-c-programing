#include<stdio.h>
void main ()
{
    int num , a ,b , c , p;
    printf("<.........Welcome To my Calcultor.........>\n");
    do
    {
        printf("        Press 1 to Addition\n");
        printf("        Press 2 to Substraction\n");
        printf("        Press 3 to Multiplication\n");
        printf("        Press 4 to Division\n");
        printf("        Choose Any Number \n");
        scanf(" %d",&num);
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

    }printf("press 1 to continue calculator :  ");
    scanf("%d",&p);

}while (p==1);
printf("Thanks for Using  my Calcultor ");
        }

    
