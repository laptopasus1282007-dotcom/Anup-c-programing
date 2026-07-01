#include<stdio.h>
void main()
{
    float unit,tb = 0;
    printf("Enter your unit = ");
    scanf("%f",&unit);
    if(unit>0 && unit<50)
    {
        tb=tb*0.50;
    }
    else if (unit>50 && unit<100)
    {
         tb=tb*0.50(unit-50)*0.75;
    }
    else if (unit>150 && unit<250)
    {
        tb=50*0.50+100*0.75*(unit-150);
    }
    else if (unit<250)
    {
        tb=50*0.5+100*0.75+100*1.20+(unit - 250)*1.50;

    }
    else 
    {
        printf("invalid unit");
    }
    printf("total bill = %.if",tb+(tb*20/100));
}