// write a program that takes a number and a single digit as input , and checks 
// whether the digit exists in the  given number or not.
#include<stdio.h>
void main ()
{
    int num, rem , digit , c =0;
    printf("Enter your Number : ");
    scanf("%d",&num);
    printf("Enter your single digit : ");
    scanf("%d",&digit);
    while(num > 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            c++;

        }
        num = num /10;

    }
    printf("Tptal digit count : %d",c);

}