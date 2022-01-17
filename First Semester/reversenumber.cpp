#include <iostream>
using namespace std;

int main()
{
    int n, r, ;
    n = 1;
    while (n > 0)
    {
        cin >> n;
        while (n > 0)
        {
            r = n % 10;
            cout << r;
            n = n / 10;
        }
    }
}