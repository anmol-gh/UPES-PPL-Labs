// First two in 11November2021.c

#include <stdio.h>

// 6.Find out the largest and smallest number in a given array.

// int main()
// {
//     int n;
//     printf("Enter the number of elements in the array ");
//     scanf("%d", &n);
//     int numbers[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %d element of the Array ", i);
//         int num;
//         scanf("%d", &num);
//         numbers[i] = num;
//     }
//     int largest = 0, smallest = 2147483647;
//     for (int i = 0; i < n; i++)
//     {
//         if (numbers[i] > largest)
//         {
//             largest = numbers[i];
//         }
//         if (numbers[i] < smallest)
//         {
//             smallest = numbers[i];
//         }
//     }
//     printf("%d is the largest number in the given array. \n", largest);
//     printf("%d is the smallest number in the given array.", smallest);
//     return 0;
// }

// 7. Count how many even numbers are there in a given integer array.

int main()
{
    int n;
    printf("Enter the number of elements in the array ");
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the Array \n", i);
        int num;
        scanf("%d", &num);
        numbers[i] = num;
    }
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even += 1;
        }
    }
    printf("There are %d even elements in the given array", even);
    return 0;
}