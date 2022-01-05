#include <iostream>
using namespace std;

int main()
{
    int n, r, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n > 0)
        {
            r = n % 10;
            if (r > 0)
            {
                cout << r;
            }
            n = n / 10;
        }
    }
}