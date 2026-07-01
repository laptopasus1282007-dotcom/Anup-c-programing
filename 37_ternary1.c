//wap to cheak voter is eligible for voting or not.
#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age = ");
    scanf("%d",&age);
    age>=18 ? printf("You are eligible for vote") : printf("You are not eligible for vote");
}