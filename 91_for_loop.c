//Write a program to display average 1 to n ( given number). re
#include<stdio.h>
void main ()
{
    int i,res=0;
    int n;
    printf("Enter your Number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res = res + i;
    }
    printf("sum of 1 to num : %d\n",res);
    printf("average of 1 to num : %.2f",res / (float)n);
}
