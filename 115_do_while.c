#include<stdio.h>
void main ()
{
    int sum = 0 , mark , p;
    do
    {
    printf("Enter a Marks : ");
    scanf("%d",&mark);
    sum = sum + mark;
    printf("You have Want to more students press 1 :  ");
    scanf("%d",&p);
} while (p==1);
    printf("Total marks of sum = %d",sum);
    
}