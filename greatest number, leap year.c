// Question
/* 
Write a program to check greatest number out of three numbers.
Write a program to check whether a given year is a leap year or not.
*/
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("Enter number 1 ");
    scanf("%d", &num1);
    printf("Enter Number 2 ");
    scanf("%d", &num2);
    printf("Enter number 3 ");
    scanf("%d", &num3);
    int highest;
    if (num1 >= num2)
    {
        highest = num1;
    }
    else
    {
        highest = num2;
    }
    if (num3 >= highest)
    {
        highest = num3;
    }
    printf("Greatest number is = %d \n", highest);
    if (num1 == num2)
    {
        printf("num1 and num2 are equal \n");
    }
    if (num2 == num3)
    {
        printf("num2 and num3 are equal \n");
    }
    if (num1 == num3)
    {
        printf("num1 and num3 are equal \n");
    }
    return 0;

    // Program to check leap year
    // int year;
    // printf("Enter an year ");
    // scanf("%d",&year);
    // if (year%4==0){
    //   printf("%d is a leap year",year);
    // }
    // else{
    //   printf("%d is not a leap year",year);
    // }
    // return 0;
}