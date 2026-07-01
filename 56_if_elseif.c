//Write a program to accept a number and check it is multiple of 3,5,8 or multiple of 
//3,5 or multiple of 5,8 or multiple of 3,8 or only multiple of 3 or only multiple of 5 or 
//only multiple of 8  or not multiple of 3,5,8.
#include<stdio.h>
void main ()
{
    int num;
    printf("enter yoour number = ");
    scanf("%d",&num);
    if (num%3==0 && num%5==0 && num%8==0)
    {
        printf("this number is multiply by 3,5,8");
    }
    else if(num%3==0 && num%5==0)
    {
        printf("This number is multiply by 3,5");
    }
    else if (num%5==0 && num%8==0)
    {
        printf("this number is multiply by 5,8");
    }
    else if (num%3==0 && num%8==0)
    {
    printf("this number is multiply by 3,8");
    }
else if(num%3==0)
{
    printf("this number is multiply by 3");
}
else if (num%5==0)
{
    printf("this number is multiply by 5");

}
else if (num%8==0)
{
    printf("this number is multiply by 8");
}
else 
{
    printf("this number is not multiply any number");
}
} 
    
