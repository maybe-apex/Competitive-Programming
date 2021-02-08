#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 0, bad = 0, odd = 0;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if ((s.size() & 1) == 0)
            {
                int z = 0, o = 0;
                for (int i = 0; i < s.size(); i++)
                    if (s[i] == '0')
                        z++;
                    else
                        o++;
                if (z % 2 || o % 2)
                    bad++;
            }
            else
                odd++;
        }
        if (odd == 0 && bad % 2)
            cout << n - 1 << endl;
        else
            cout << n << endl;
    }
    return 0;
}