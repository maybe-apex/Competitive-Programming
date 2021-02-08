#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mn = 1e9, pos;
        cin >> n;
        int a[n], swp[n];
        for (auto &i : a)
            cin >> i;
        for (auto &i : swp)
            i = 0;
        for (int i = n - 2; i >= 0; i--)
            for (int j = i; j < n - 1; j++)
                if (a[j] > a[j + 1] && swp[j] == 0)
                    swap(a[j], a[j + 1]), swp[j] = 1;
        for (auto &i : a)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}