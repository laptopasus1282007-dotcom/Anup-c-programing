//write a program  to convert gram into kg.
#include<stdio.h>
void main ()
{
    float gram,kg;
    printf("enter a gram = ");
    scanf("%f",&gram);
    kg=gram/1000;
    printf("gram in kg = %.0f kg",kg);

}