#include <stdio.h>

// int main(){
// int addNum(int num1, int num2){
//     int sum=0;
//     sum+=num1+num2;
//     return sum;
// }
//     printf("%f",addNum(10,20));
//     return 0;
// }

void armstrong(int number);
void factorial(int number);
int main(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    armstrong(number);
    // void coprime(number);
    factorial(number);
}

void armstrong(int number){
    int originalNumber=number;
    int total=0;
    while (number!=0){
    int n;
    n=number%10;
    number=number/10;
    total+=n*n*n;
    }
    if(total==originalNumber){
        printf("Yes %d is an Armstrong number \n",originalNumber);
    }
}

void factorial(int number){
    int answer=1;
    while (number>0){
        answer=answer*number;
        number--;
    }
    printf("%d is the factorial of the number %d", answer, number);
}

void coprime(int number){

}