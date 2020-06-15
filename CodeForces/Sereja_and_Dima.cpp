#include <iostream>

using namespace std;

int main()
{

    int t, s = 0, d = 0, x = 0, a[100000];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    int i, l = 0, r = t - 1;
    for (i = 0; i < t; i++)
    {
        x = 1 - x;
        if (x)
        {
            if (a[l] >= a[r])
            {
                s += a[l];
                l++;
            }
            else
            {
                s += a[r];
                r--;
            }
        }
        if (!x)
        {
            if (a[l] >= a[r])
            {
                d += a[l];
                l++;
            }
            else
            {
                d += a[r];
                r--;
            }
        }
    }
    cout << s << " " << d;

    return 0;
}