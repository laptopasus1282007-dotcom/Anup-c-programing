// how to read data from file 
// fscan() :- its used to read data from file.
#include<stdio.h>
void main()
{
    char data[30];
    FILE *f;
    f = fopen("C:\\Users\\satis\\OneDrive\\Desktop\\Documents\\anup\\abc.text","r");
    fscanf(f,"%s",data);
    printf("%s ",data);

    fscanf(f,"%s",data);
    printf("%s ",data);

    fscanf(f,"%s",data);
    printf("%s ",data);

    fscanf(f,"%s",data);
    printf("%s ",data);

    fscanf(f,"%s",data);
    printf("%s ",data);

    fclose(f);
}