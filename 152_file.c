// fputc() :- its used to write one char inside file .
#include<stdio.h>
void main()
{
     FILE *f;
    f = fopen("C:\\Users\\satis\\OneDrive\\Desktop\\Documents\\anup\\dada.txt","a");

    fputc('s',f);

    fclose(f);
}