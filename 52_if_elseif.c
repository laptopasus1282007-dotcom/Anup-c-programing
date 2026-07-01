//write  program to print  name of day according to number.
#include<stdio.h>a
void main ()
{
    int day;
    printf("enter your number : ");
    scanf("%d",&day);
    if (day == 1)
    {
        printf("Monday");
    }
    else if (day == 2)
    {
        printf("Tuesday");
    }
    else if (day == 3)
    {
        printf("Wednesday");

    }
    else if (day == 4)
    {
        printf("Thusday");

    }
    else if (day == 5)
    {
        printf("Friday");
    }
    else if(day == 6)
    {
        printf("Saturday");

    }
    else if (day == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Enter a no 1 to 7");
    }
}