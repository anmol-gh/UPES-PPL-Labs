#include <stdio.h>

//1.	Find sum of all array elements using recursion.
int total(int arrays[], int index, int sum, int length);
int main(void)
{
    int num[4] = {1, 2, 3, 4};
    int answer = total(num, 0, 0, sizeof(num) / sizeof(num[0]));
    printf("%d", answer);
    return 0;
}

int total(int arrays[], int index, int sum, int length)
{
    if (index == length)
    {
        return sum;
    }
    sum += arrays[index];
    total(arrays, index + 1, sum, length);
}
//2.	Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter number of elements in the Array \n");
//     scanf("%d", &n);
//     int Arr[n];
//     for (int k = 0; k < n; k++)
//     {
//         printf("Enter a number for index %d\n", k);
//         scanf("%d", &Arr[k]);
//     }
//     printf("Array Elements are :- \n");
//     for (int k = 0; k < n; k++)
//     {
//         printf("%d \n", Arr[k]);
//     }
//     int i, j;
//     printf("Enter a position to add a number and a position to delete a number \n");
//     scanf("%d %d ", &i, &j);
//     for (int k = j - 1; k < n - 1; k++)
//     {
//         Arr[k] = Arr[k + 1];
//     }
//     for (int k = (n - 1); k >= i; k--)
//     {
//         Arr[k] = Arr[k - 1];
//     }
//     printf("Enter a Number to add \n");
//     scanf("%d", &Arr[i - 1]);

//     printf("Array Elements are :- \n");
//     for (int k = 0; k < n; k++)
//     {
//         printf("%d \n", Arr[k]);
//     }
//     return 0;
// }