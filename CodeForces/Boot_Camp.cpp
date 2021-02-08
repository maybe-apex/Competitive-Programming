#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k1, k2, sum = 0;
        cin >> n >> k1 >> k2;
        int a[n][2];
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            a[i][0] = (s[i] == '0' ? 0 : 1);
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] == 0)
                a[i][1] = 0;
            else if (a[i][0] == 1)
                a[i][1] = k1, sum += k1;
            if (a[i - 1][1] + a[i][1] > k2)
                a[i][1] = k2 - a[i - 1][1], sum += k2 - a[i - 1][1] - k1;
        }
        cout << sum << endl;
    }

    return 0;
}