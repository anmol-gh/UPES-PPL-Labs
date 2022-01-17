//07/10/2021

/* 
question

Write a C program that asks users to enter the marks in physics chemistry and maths out of 100. Based on the provided inputs. The program should be able to output the following:

a) Total marks of the student.

b) Average marks of the student.

c) Grade of the student based on the given grading policies:

i) if avg>=90 GRADE=EX

ii) if 80<=avg<90 GRDAE=A

3:56 pm
iii) if 70<=avg<80 GRDAE=B

iii) if 60<=avg<70 GRDAE=C

iv) Else GRADE=F*/

#include <stdio.h>

int main(void)
{
    int phy_marks, chem_marks, maths_marks;
    float average;
    int check = 1;

    //Taking marks from the user

    printf("Enter physics marks ");
    scanf("%d", &phy_marks);
    printf("Enter chemistry marks ");
    scanf("%d", &chem_marks);
    printf("Enter mathematics marks ");
    scanf("%d", &maths_marks);

    //Checking whether input is correct or not

    if (phy_marks > 100 || chem_marks > 100 || maths_marks > 100)
    {
        check = 0;
        printf("Incorrect marks entered, Please re-enter the marks");
    }
    if (check)
    {
        printf("Total marks of the student are %d \n", phy_marks + chem_marks + maths_marks);

        //Calculating average

        average = (phy_marks + chem_marks + maths_marks) / 3;
        printf("Average marks of the student is %f \n", average);
        if (average >= 90)
        {
            printf("Grade is ex");
        }
        else if (average >= 80)
        {
            printf("Grade is A");
        }
        else if (average >= 70)
        {
            printf("Grade is B");
        }
        else if (average >= 60)
        {
            printf("Grade is C");
        }
        else
        {
            printf("Grade is F");
        }
    }
    return 0;
}