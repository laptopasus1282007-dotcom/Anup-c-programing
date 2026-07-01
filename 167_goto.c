#include<stdio.h>
void main ()
{
    int i=1, n, sum =0;
    printf("Enter a Num : ");
    scanf("%d",&n);
    anup:

    sum = sum + i;
    i++;
    if (i <= 10)
    {
        goto anup;

    }
    printf("sum of 1 to n : %d",sum);
}