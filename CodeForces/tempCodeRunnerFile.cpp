#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, wins = 0, losses = 0, winning_streaks = 0;
        vector<int> losing_streaks;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
            {
                wins++;
                if (i == 0 || s[i - 1] == 'L')
                    winning_streaks++;
            }
            if (s[i] == 'L')
            {
                losses++;
                if (i == 0 || s[i - 1] == 'W')
                    losing_streaks.push_back(0);
                losing_streaks.back()++;
            }
        }
        if (k >= losses)
        {
            cout << 2 * n - 1 << endl;
            continue;
        }
        if (!wins)
        {
            if (k == 0)
                cout << 0 << endl;
            else
                cout << 2 * k - 1 << endl;
            continue;
        }
        if (s[0] == 'L')
            losing_streaks[0] = 1e8;
        if (s[n - 1] == 'L')
            losing_streaks.back() = 1e8;
        sort(losing_streaks.begin(), losing_streaks.end());
        for (auto i : losing_streaks)
        {
            if (i > k)
                break;
            k -= i;
            winning_streaks--;
        }
        cout << 2 * wins - winning_streaks << endl;
    }

    return 0;
}