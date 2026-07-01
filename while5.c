// Write a progarm that takes a number as input and calcultes of the sum
// only its even digits.
#include <stdio.h>
void main ()
{
    int num, rem, su7m= 0;
    printf("enter a num :");
    scanf("%d",&num);
    while (num > 0)
    {
        rem = num % 10;
       if (rem % 2 == 1)
        {
            sum = sum + rem ;
 
        }
        num = num /10;
    }
    printf("%d", sum);
}