#include<stdio.h>
void main ()
{
    int i = 1 , n;
    printf("Enter a Num : ");
    scanf("%d",&n);
    anup:

    printf("%d * %d = %d\n", n, i ,n*1);
    i++;
    if(i <= 10)
    {
        goto anup;
    }


}