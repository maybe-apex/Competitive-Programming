#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char x;
        int count = 0, ans = 0;
        x = (s[0] == '0') ? '0' : '1';
        for (int i = 1; i < s.size(); i++)
        {
            if (count >= 1)
                if (s[i] == s[0])
                    ans++;
            if (x != s[i])
                count++;
        }
        cout << ans << endl;
    }
    return 0;
}