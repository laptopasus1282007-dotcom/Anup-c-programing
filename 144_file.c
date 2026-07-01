#include<stdio.h>
void main ()
{
    int num, cube ;
    printf("enter your Number : ");
    scanf("%d",&num);
    cube = num *num * num;
    printf("cube of %d = %d\n",num,cube);

    FILE *f;
    f = fopen("C:\\Users\\satis\\OneDrive\\Desktop\\Documents\\anup\\abc.text","a");
    fprintf(f,"cube of %d = %d\n",num,cube);
    fclose(f);
}