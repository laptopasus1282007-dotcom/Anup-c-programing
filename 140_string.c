//strcat() :- its combined two strings and store in one variable 
#include<stdio.h>
#include<conio.h>
void main ()
{
    char st1[20], st2[20];
    printf("Enter String : ");
    gets(st1); //Anup


    printf("Enter String : ");
    gets(st2); //Wasankar


    printf("st1 = %s\n", st1); //Anup
    printf("st2 = %s\n",st2); //Wasankar

    strcat(st1 , " " );
    strcat(st1,st2);

    printf("st1 = %s\n", st1);
    printf("st2 = %s\n", st2);




}