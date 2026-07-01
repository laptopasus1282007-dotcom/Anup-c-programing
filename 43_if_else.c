// wap to  check voter is a eligible for voting or not.
#include<stdio.h>
void main()
{
    int age;
    printf("entern your age = ");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("You can eligible for vote");
    
    }
    else
    {
        printf("you can not eligible for voting\n");
        printf("Because you are under age ");
    }
}