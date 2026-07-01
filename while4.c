// write a  program that takes a num as input and  count how mmany digits  
// it contains ,
#include <stdio.h>
void  main()
{
    int  num, sum = 0;
    printf("enter a num : ");
    scanf("%d",  &num);
    while (num > 0)
{
    sum++;
    num = num ;
}
    printf("digit count in number : %d\n",sum);
    return 0;
}