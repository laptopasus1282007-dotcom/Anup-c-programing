// Write a program to display multiple of   7  between given range. 
#include<stdio.h>
void main ()
{
    int i, start,end;
    printf("enter your start range : ");
    scanf("%d",&start);
    printf("enter your end range : ");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        if(i % 7==0)
        {
            printf("%d\n",i);
        }
    }
}
