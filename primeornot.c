// wright a program to cheack give number is prime or not.
#include<stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d, &n");
    int count =0;
    for (i = 1; i<=n; i++)
    {
        if (n % i ==0)
        {
            count++;
        
        }
    }
    if (count ==2)
    {
        printf("num is prime");
    }
    else
    {
        printf("number is not prime");
    }


}