//how to write dat inside file .
// fprintf(file_location ,"data") :- its used to write in inside
#include<stdio.h>
void main ()
{
    FILE*f;

    f=fopen("C:\\Users\\satis\\OneDrive\\Desktop\\Documents\\anup\\dada.txt", "w");

    fprintf(f,"I am Anup Wasankar \n");
    fprintf(f,"I am from Akola");

    fclose(f);

}
