//write a progeram to input all sides of a triangle to check whether triangle is vaild or not.
#include<stdio.h>
void main ()
{
    int s1, s2, s3;
    printf("enter sides of triangle s1 : ");
    scanf("%d",&s1);
    printf("enter sides of triangle s2 : ");
    scanf("%d",&s2);
    printf("enter sides of triangle s3 : ");
    scanf("%d",&s3);
    if(s1+ s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
    {
        printf("sides make triangle");

    }
    else
    {
        printf("sides not make triangle");
    }
}