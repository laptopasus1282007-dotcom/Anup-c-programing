//write a program to num even or odd.
#include<stdio.h>
void main ()
{
  int num;
  printf("enter a num = ");
  scanf("%d",&num);
  num % 2 == 0 ? printf("num is even") : printf("num is odd");
}
