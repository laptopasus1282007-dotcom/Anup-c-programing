// Used to while loop to read file all data
#include<stdio.h>
void main()
{
    char data[30];
    FILE *f;
    f = fopen("C:\\Users\\satis\\OneDrive\\Desktop\\Documents\\anup\\abc.text","r");
    int stop;
    while(1)
{
    stop = fscanf(f,"%s",data);
    if(stop==-1)
    {
        break;
    }
    printf("%s ",data);
}
    fclose(f);
}