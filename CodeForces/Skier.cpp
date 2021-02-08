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
        set<pair<int, int>> w;
        int x = 0, y = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int a = x, b = y;
            if (s[i] == 'N')
                y++;
            else if (s[i] == 'S')
                y--;
            else if (s[i] == 'E')
                x++;
            else
                x--;
            if (w.find({x + a, y + b}) == w.end())
            {
                ans += 5;
                w.insert({x + a, y + b});
            }
            else
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}