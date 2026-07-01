// write a program to check a given chr is  vovel or consonant.
#include<stdio.h>
void main ()
{
    char alpha;
    printf("Enter your alphabet : ");
    scanf("%c",&alpha);
    if (alpha == 'a' || alpha == 'i' || alpha == 'e' || alpha == 'o' || alpha == 'u')
{
    printf("alphabet is vovel");

}
else
{
    printf("alphabet is consonant");
}
}