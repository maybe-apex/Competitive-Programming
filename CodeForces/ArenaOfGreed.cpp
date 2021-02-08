#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x;
        while (n >= 0)
        {
            if (n % 2)
            {
                x += 1, n--;
            }
            else if (!n % 2)
            {
                x += n / 2, n /= 2;
            }
            if (n % 2)
                n--;
            else if (!n % 2)
                n /= 2;
            cout << "test";
        }
        cout << x << endl;
    }

    return 0;
}