// strupr():- its convert string in upper case string
#include<string.h>
void main ()
{
    char st[20];
    printf("enter string : ");
    gets(st); //anup
    printf("string : %s\n", st);
    strupr(st);
    printf("upper string : %s\n",st); // ANUP
}