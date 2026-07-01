#include<stdio.h>
void main ()
{
    int  age, order,  p, total =0,c1 =0, c2 =0, c3=0 , c4=0, c5=0;
    printf("enter your age : ");
    scanf("%d",&age);
    if (age >=18)
    {
        printf("Welcome to my club : \n");
        do
        {
            printf("club menu : \n");
            printf("1. pizza : 199\n");
            printf("2. Burger : 99\n");
            printf("3. pasta : 79\n");
            printf("4. sandwhich : 119\n");
            printf("5. momos : 149\n");;
            printf("Choose any items : \n");
            scanf("%d",&order);
            if(order ==1)
            {
                printf("\nYour pizza is order \n");
                total= total + 199;
                c1++;
            }
            else if (order== 2)
            {
                printf("\nYour Burger is order \n");
                total= total + 99;
                c2++;
            }
            else if (order==3)
            {
                printf("\nYour pasta is order \n");
                total= total +79;
                c3++;
            }
            else if (order==4)
            {
                printf("\nYour Sandwhich is order \n");
                total= total +119;
                c4++;
            }
            else if (order==5)
            {
                printf("\nYour momos is order \n");
                total= total +149;
                c5++;
            }
            else
            {
                printf("\nplease Enter a  1 to 5\n");

            }

            printf("\nyour order : \n");
            printf("pizza = %d\n",c1);
            printf("Burger = %d\n",c2);
            printf("pasta = %d\n",c3);
            printf("Sandwhich = %d\n",c4);
            printf("momos = %d\n",c5);

            printf("\npress one for order more item :  ");
            scanf("%d",&p);

        } while(p==1);

        printf("\n\n<----------------------sir/Madam your bil------------------>\n");
        printf("<--------------------------------------------------------------->\n");
        printf("     item       price       quantity     total\n");
        printf("     pizza       199          %d          %d\n, c1, c1*199");
        printf("     Burger      99           %d            %d\n, c2, c2*99");
        printf("     Pasta       79           %d           %d\n, c3, c3 *79");
        printf("     Sandwhich   199          %d          %d\n, c4, c4*119");
        printf("     momos       149          %d          %d\n, c5, c5*149");
        printf("<--------------------------------------------------------------->\n");
        printf("                    total bil : %d\n",total);
        printf("<--------------------------------------------------------------->\n");
        
    }
    else
    {
        printf("You are not adult not plaese try after %d year ", 18 - age );
    }

}