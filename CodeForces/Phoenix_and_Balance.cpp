#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // int n, x = 0, y = 0, k = 0, a;
    // long long b[10000];
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     for (int j = 2; j <= pow(2, a); j *= 2)
    //     {
    //         b[k] = j;
    //         k++;
    //     }
    //     x = b[k - 1];
    //     y = b[k - 2];
    //     for (int l = 1; l <= k; l++)
    //     {
    //         if (l <= (k - 2) / 2)
    //             x += b[l];
    //         else if (l <= k - 2)
    //             y += b[l];
    //     }
    //     cout << abs(x - y) << endl;
    // }

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        cout << 2 * (pow(2, a / 2) - 1) << endl;
    }

    return 0;
}