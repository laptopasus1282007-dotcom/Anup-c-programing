//wap to print months according to number.
#include<stdio.h>
void main ()
{
    int months;
    printf("enter a your number = ");
    scanf("%d",&months);
    switch(months)
    {
        case 1 : printf("January\n");break;
        case 2 : printf("February\n");break;
        case 3 : printf("March\n");break;
        case 4 : printf("April\n");break;
        case 5 : printf("May\n");break;
        case 6 : printf("June\n");break;
        case 7 : printf("July\n");break;
        case 8 : printf("Augsut\n");break;
        case 9 : printf("september\n");break;
        case 10 : printf("Octmber\n");break;
        case 11 : printf("November\n");break;
        case 12 : printf("December\n");break;
        default : printf("Enter a 1 to 12 number");

    }
}