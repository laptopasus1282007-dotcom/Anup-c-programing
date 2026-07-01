#include<stdio.h>
#include<string.h>
struct pen
{
    char name [20];
    int price;
    float rating;
};
void main()
{
    struct pen p[5];
    int i;
    for (i = 0 ; i < 5; i++)
{


    printf("enter pen info : \n");
    printf("Enter Name : ");
    scanf("%s",p[i].name);
    printf("Enter price : ");
    scanf("%d",&p[i].price);
    printf("Enter rating :  ");
    scanf("%f",&p[i].rating);

}

for (i = 0 ; i < 5; i++)

{
    printf("\n\npen1 info :\n", i + 1);
        printf("name : %s\n", p[i].name);
        printf("price : %d\n", p[i].price);
        printf("rating : %.1f\n",p[i].rating);
        printf("-------------------\n");
}

}
