#include <iostream>
#include <algorithm>
using namespace std;

int hcf(int a, int b)
{
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int main()
{
    int a, b, n, x = 0;
    bool game = 0;
    cin >> a >> b >> n;
    while (n > 0)
    {
        x = 1 - x;
        if (x)
        {
            n -= hcf(n, a);
            game = 0;
            // cout << "1\t" << n << endl;
        }
        if (n - hcf(n, b) < 0)
            break;
        if (x)
        {
            n -= hcf(n, b);
            game = 1;
            // cout << "0\t" << n << endl;
        }
    }

    cout << game << endl;

    return 0;
}