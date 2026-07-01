//create a program that simultans entry into a club and ordering food / drinks 
//using nested if else statement
#include<stdio.h>
void main()
{
    int age,order;
    printf("enter your age : ");
    scanf("%d",&age);
    if(age>=18)


{
    printf("Welcome to my club :\n");
    printf("Menu :\n");
    printf("1.Momos :100\n");
    printf("2. Panipuri :60\n");
    printf("3.Frenchfrize :120\n");
    printf("4.Noodels :140\n");
    printf("5. Pizza :199\n");
    printf("6. icecream :99\n");
    printf("Choose any items : ");
    scanf("%d",&order);

    if(order ==1)
    {
        printf("you are ordered a momos please pay a 100rs\n");
    }
    else if(order ==2)
    {
        printf("you are ordered a panipuri please pay a 60rs\n");
    }
    else if (order ==3)
    {
        printf("you are ordered a Frenchfrize please pay a 120rs\n");
    }
    else if (order ==4)
    {
    printf("you are ordered a Noodels please pay a 140rs\n");
    }
    else if (order ==5)
    {
        printf("You are ordered a Pizza Plese pay a 199rs\n");
    }
    else if(order ==6)
    {
        printf("you are ordered a icecream please pay a 99rs\n");
    }
    else
    {
        printf("Please Enter a 1 to 6");

    }
    else
    {
        printf("You are not eligible for enter a club please try after %dyears\n",18-age  );
    }
}

}