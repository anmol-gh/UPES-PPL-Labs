#include <stdio.h>

int main(void)
{
    int phy_marks, chem_marks, maths_marks;
    float average;
    int check = 1;
    printf("Enter physics marks ");
    scanf("%d", &phy_marks);
    printf("Enter chemistry marks ");
    scanf("%d", &chem_marks);
    printf("Enter mathematics marks ");
    scanf("%d", &maths_marks);
    if (phy_marks > 100 || chem_marks > 100 || maths_marks > 100)
    {
        check = 0;
        printf("Incorrect marks entered, Please re-enter the marks");
    }
    if (check)
    {
        printf("Total marks of the student are %d \n", phy_marks + chem_marks + maths_marks);
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