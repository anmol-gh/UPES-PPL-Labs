#include <iostream>

using namespace std;

int main()
{
    int table[2][3] = { 10,
                        15,
                        30,
                        14,
                        30,
                        33 }
    int a = 0;
    try
    {
        cout << "In try block" << "\n";
        throw 20;
        if (a > -1)
        {
            throw a;
        }
    }
    catch (int x)
    {
        cout << "Exception" << x;
    }
    return 0;
}