//strcpy() :- its copy one variable strings in another veriable  
#include<stdio.h>
#include<string.h>
void main ()
{
    char st1[20], st2[20];
    printf("Enter st1 : ");
    gets(st1); //Anup


    printf("Enter st2 : ");
    gets(st2); //Anup


    printf("st1 = %s\n", st1); //Anup
    printf("st2 = %s\n",st2); //Wasankar

    strcpy(st2,st1);

    printf("st1 = %s\n", st1);
    printf("st2 = %s\n", st2);




}