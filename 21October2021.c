// TASK

/*
1.	Generate the first ‘n’ terms of a Fibonacci sequence. [Hint: The first and second terms of a Fibonacci sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence.]
2.	Print numbers which are divisible by 3 and 5 from the first ‘n’ natural numbers.
3.	Generate all the prime numbers between 1 and n, where n is a value supplied by the user. 
4.	Reverse the digits of a given number and check if given number is a Palindrome or not using do-while.
5.	Using a menu driven control, print the given patterns as per user choice.
6.	Write a C program to find frequency of each digit in a given integer.
7.	Write a C program to check whether a number is Prime number or not.
8.	Write a C program to find power of a number using for loop.
*/
#include <stdio.h>

int main(void)
{
    //Question 01

    // int n;
    // printf("Enter a number N for the sequence of fibonacci ");
    // scanf("%d", &n);
    // int first, second, third;
    // first = 0;
    // second = 1;
    // if (n >= 2)
    // {
    //     printf("%d %d ", first, second);
    //     printf("%d ", second);
    //     n -= 2;
    // }
    // while (n > 0)
    // {
    //     third = first + second;
    //     printf("%d ", third);
    //     first = second;
    //     second = third;
    //     n -= 1;
    // }

    //Question 02

    // int n;
    // printf("Enter a number n ");
    // scanf("%d",&n);
    // for (int i=0;i<n;i++){
    //     if (i%3==0 && i%5==0){
    //         printf("%d is divisble by both 3 and 5 \n",i);
    //     }
    // }

    //Question 03

    // int n, total;
    // printf("Enter a number n ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     total = 0;
    //     for (int j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             total += 1;
    //             break;
    //         }
    //     }
    //     if (total == 0)
    //     {
    //         printf("%d is a Prime Number \n", i);
    //     }
    // }

    //Question 06
    int number;


    //Question 07 is a sub-part of Question 03

    //Question 08
    // int number, power, answer;
    // printf("Enter the number ");
    // scanf("%d", &number);
    // printf("Enter the power ");
    // scanf("%d", &power);
    // answer = 1;
    // for (int i = 1; i <= power; i++)
    // {
    //     printf("%d before operation \n", answer);
    //     answer = answer * number;
    //     printf("%d after operation \n", answer);
    // }
    // printf("%d", answer);
}