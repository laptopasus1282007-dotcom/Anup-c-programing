//wap to cheak num positive or negative.
#include<stdio.h>
void main ()
{
    int num;
    printf("Enter your num = ");
    scanf("%d",&num);
    num > 0 ? printf("Num is Positive") : printf("Num is Negative");
}