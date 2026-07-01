// read all character from using while loop.
#include<stdio.h>
void main()
{
    char ch;
    FILE *f;
    f = fopen("C:\\Users\\satis\\OneDrive\\Desktop\\Documents\\anup\\dada.txt","r");


    fgetc(f);

    while (1)
   {
        ch = fgetc(f);
        if (ch==-1)
        {
            break;
        }
        printf("%c",ch);
   }
    fclose(f);
}
