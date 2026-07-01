// write a program to display factor count of given number...
#include<stdio.h>
void main()
{
    int  i, n;
    printf("enter a num : ");
    scanf("%d" ,&n);
    int count  = 0;
    for (i =1;i <=n; i++)
    {
        if (n % i == 0)
        {
            count++;
        
        }
    }
    printf("factor count = %d", count);
}