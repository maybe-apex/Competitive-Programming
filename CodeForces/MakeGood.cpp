#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x = 0, y = 0;
        cin >> n;
        int a[n];
        for (auto &i : a)
            cin >> i, x += i, y ^= i;
        cout << "2\n"
             << y << " " << x + y << endl;
    }

    return 0;
}