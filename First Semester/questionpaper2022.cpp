#include <iostream>

using namespace std;
//calculating hcf
int cal_hcf(int num1, int num2)
{
    int hcf = 0;
    for (int i = 1; i < min(num1, num2) + 1; i++)
    {
        if (num1 % i == 0 and num2 % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

//calculating factorial
int factorial(int number)
{
    if (number == 1)
    {
        return number;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int pass, fail;
    int students = 60;
    while (students--)
    {
        int a, b, c, d, e;
        cout << "enter marks of 5 subjects";
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;
        int fail_sub = 0;
        if (a < 35)
        {
            fail_sub += 1;
        }
        if (b < 35)
        {
            fail_sub += 1;
        }
        if (c < 35)
        {
            fail_sub += 1;
        }
        if (d < 35)
        {
            fail_sub += 1;
        }
        if (e < 35)
        {
            fail_sub += 1;
        }
        if (fail_sub > 2)
        {
            fail += 1;
        }
        else if ((a + b + c + d) * 0.2 > 40.00)
        {
            pass += 1;
        }
        else
        {
            fail += 1;
        }
    }
    cout << "pass" << pass;
    cout << "fail" << fail;

    //Checking LCM of two numbers
    int num1,
        num2;
    cout << "Enter two numbers";
    cin >> num1;
    cin >> num2;
    cout << (num1 * num2) / cal_hcf(num1, num2);
    return 0;
}