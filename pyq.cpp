#include <iostream>

using namespace std;
float ellipse(int minor_radius, int major_radius)
{
    return 3.14 * minor_radius * major_radius;
}

char *is_big(int num_1, int num_2)
{
    if (num_1 > num_2)
    {
        return "Yes";
    }
    else if (num_1 == num_2)
    {
        return "Equal";
    }
    else
    {
        return "No";
    }
}

int addition(int num_1, int num_2)
{
    return num_1 + num_2;
}
float addition(float num_1, float num_2)
{
    cout << "float";
    return num_1 + num_2;
}
int main()
{
    // int minor_radius, major_radius;
    // cout << "Enter minor radius of the ellipse" << endl;
    // cin >> minor_radius;
    // cout << "Enter major radius of the ellipse" << endl;
    // cin >> major_radius;
    // int answer = ellipse(minor_radius, major_radius);
    // cout << answer;
    // int num_1, num_2;
    // cout << "Enter number 01" << endl;
    // cin >> num_1;
    // cout << "Enter number 02" << endl;
    // cin >> num_2;
    // char *result;
    // result = is_big(num_1, num_2);
    // cout << result;
    // cout << addition(10, 15);
    cout << addition(10.8, 12.5);
    return 0;
}