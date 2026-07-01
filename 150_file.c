// fgetc() :- its used to read one character from file. 
#include<stdio.h>
void main()
{
    char ch;
    FILE *f;
    f = fopen("C:\\Users\\satis\\OneDrive\\Desktop\\Documents\\anup\\abc.text","r");


    fgetc(f);

    ch = fgetc(f);
    printf("%c",ch);

    ch = fgetc(f);
    printf("%c",ch);

    ch = fgetc(f);
    printf("%c",ch);

    ch = fgetc(f);
    printf("%c",ch);


    fclose(f);
}
