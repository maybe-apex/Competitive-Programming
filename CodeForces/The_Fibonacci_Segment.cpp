#include <iostream>

using namespace std;

int main()
{
    int n, len = 0;
    cin >> n;
    int a[n], mx = n < 3 ? n : 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i >= 2)
        {
            if (a[i - 2] + a[i - 1] == a[i])
                len++, mx = max(mx, len);
            else
                len = 0;
        }
    }
    if (n < 3)
        return cout << n, 0;
    return cout << mx + 2, 0;
}