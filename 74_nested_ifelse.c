//write a program to accept roll no and marks of 5 subjects of a student, if 
//individuals  subject have above 40 marks so print student qualify exam 
//otherwise print student fail in exam and if student qualify exam so 
//Calculate  percentage got in exam  by  student. 
//a. If per greater than or equal to 75  A grade 
//b. If per between 60-75  B grade 
//c. If per between 50-60  C grade 
//d. If per between 40-50  D grade
#include <stdio.h>
void main()
{
    int s1, s2, s3, s4, s5;
    float per, total; 

    printf("Enter marks of 5 subjects:\n");
    printf("Enter s1 : ");
    scanf("%d",&s1);
    printf("Enter s2 : ");
    scanf("%d",&s2);
    printf("Enter s3 : ");
    scanf("%d",&s3);
    printf("Enter s4 : ");
    scanf("%d",&s4);
    printf("Enter s5 : ");
    scanf("%d",&s5);

    if(s1 >= 40 && s2 >= 40 && s3 >= 40 && s4 >= 40 && s5 >= 40)
    {
        printf("Student Passed\n");

        total= s1 + s2 + s3 + s4 + s5 ;
        per = total/500*100;
        

        printf("Percentage = %.2f\n", per);

        
        if(per >= 75)
            printf("Grade A\n");
        else if(per >= 60)
            printf("Grade B\n");
        else if(per >= 50)
            printf("Grade C\n");
        else
            printf("Grade D\n");
    }
    else
    {
        printf("You are Failed\n");
    }

    
}