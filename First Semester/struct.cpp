#include <iostream>

using namespace std;

int main()
{
    struct Distance
    {
        int kilometer;
        int meter;
    };

    struct Distance first_num;
    struct Distance second_num;
    cout << "Enter km of first number";
    cin >> first_num.kilometer;
    cout << "Enter metre of first number";
    cin >> first_num.meter;
    cout << "Enter km of second number";
    cin >> second_num.kilometer;
    cout << "Enter metre of second number";
    cin >> second_num.meter;
    struct Distance answer;
    int total(Distance first_num, Distance second_num)
    {
        answer.kilometer = first_num.kilometer + second_num.kilometer;
        return answer.kilometer;
    };
    cout << total(first_num, second_num);
    return 0;
}