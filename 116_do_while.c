// keep taking marks from the useruntil they enter a maark greater than 100
// (invalid), then stop.
#include<stdio.h> 
void main ()
{
    int marks;
    do
    {
        printf("enter marks : ");
        scanf("%d",&marks);

    }while (marks <=100);
}