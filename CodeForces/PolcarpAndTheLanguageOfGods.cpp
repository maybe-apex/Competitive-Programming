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
        int ans = floor(s.size() / 2);
        if (s[0] == 'w' && s.size() == 1)
            ans++;
        cout << ans << endl;
    }

    return 0;
}