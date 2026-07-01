//  Write a program to check given char is vowel or consonant.
#include<stdio.h>
void main ()
{

char alpha;
printf("Enter your alphabet = ")
scanf("%c",&alpha);
switch(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
{
    case 1 : printf("this is vovel");break;
    case 0 : printf("this is conconant");break;
}
}

