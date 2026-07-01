#include<stdio.h>
void main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>=18)
    {
        printf("you can vote");
    }
    else
    {
        printf("you cannot vote\n");
        printf("after vote =%d year",num-18);
    }
}