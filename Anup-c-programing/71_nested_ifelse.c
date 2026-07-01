//wap to find greatest number among has given three numbers without 
//using (&&) logical and operator.
#include<stdio.h>
void main ()
{
    int n1,n2,n3;
    printf("enter a n1 : ");
    scanf("%d",&n1);
    printf("enter a n2 : ");
    scanf("%d",&n2);
    printf("enter a n3 : ");
    scanf("%d",&n3);
    if(n1 > n2)
    {
        if (n1 > n3)
        {
            printf("greatest num is : %d",n1);
        }
        else
        {
            printf("greatest num is : %d",n3);
        }
    }
    else 
    {
        if(n2 > n3)
        {
            printf("greatest num is : %d",n2);

        }
        else
        {
            printf("greatesst num is  : %d",n3);          
        }
    }
}