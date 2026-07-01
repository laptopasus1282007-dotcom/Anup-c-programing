#include<stdio.h>
void main ()
{
    float digit1,digit2,ans;
    printf("This is Your Division Calculator \n");
    printf("Enter your first digit = ");
    scanf("%f",&digit1);
    printf("Enter your second digit = ");
    scanf("%f",&digit2);
    ans=digit1/digit2;
    printf("This is your Division = %.1f",ans);

}
