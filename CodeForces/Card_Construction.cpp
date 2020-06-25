#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, s = 0, i = 1;
        cin >> x;
        int a[x + 1];
        for (i = 1; s <= x; i++)
        {
            a[i] = 3 / 2 * i * i + 1 / 2 * i;
            s += a[i];
        }
        sort(a, a + i - 1);
        int c = 0;
        // while (x >= 2)
        // {
        //     if (x - a[i] >= 0)
        //         c++, x -= a[i];
        //     else
        //         i++;
        // }
        cout << c << endl;
    }
    return 0;
}