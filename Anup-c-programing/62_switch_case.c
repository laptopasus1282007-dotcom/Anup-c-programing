//write a program using switch case to print your friend's name based on the
// first latter of their name
#include<stdio.h>
void main ()
{
    char name;
    printf("Enter a first latter of name : ");
    scanf("%c",&name);
    if (name >= 'A' && name <= 'Z')
    {
    name = name + 32;
    }                            
  switch (name)
    {
    case 'a' :
    printf("anup");
    break;
    case 'b' :-
    printf("bhushan");
    break;
    case 'h' :
    printf("harshit");
    break;
    case 'v' :
    printf("vivek");
    break;
    default:
    printf("enter a correct first latter %c",name);
}
}