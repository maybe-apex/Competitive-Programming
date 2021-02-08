#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int ans = 0;
        vector<int> pos;
        cin >> s;
        int l = s.length();
        for (int i = 0; i < l - 2; i++)
        {
            if ((s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e') || (s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o'))
            {
                ans++;
                i += 2;
                if (i < l - 2)
                    if (s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e')
                        i++;
                pos.push_back(i);
            }
        }
        cout << ans << endl;
        // for (int i : pos)
        //     cout << i << " ";
        for (int i = 0; i < pos.size(); i++)
            cout << pos[i] << " ";
        cout << endl;
    }
    // int main()
    // {
    //     int t;
    //     cin >> t;
    //     while (t--)
    //     {
    //         int count = 0;
    //         vector<int> ind;
    //         string s;
    //         cin >> s;
    //         for (int i = 0; i < s.size() - 2; i++)
    //         {
    //             if (s.substr(i, 3) == "one")
    //                 count++, s[i] = 'x', s[i + 1] = 'x', s[i + 2] = 'x', ind.push_back(i + 1);
    //             if (s.substr(i, 3) == "two")
    //                 count++, s[i] = 'x', s[i + 1] = 'x', s[i + 2] = 'x', ind.push_back(i + 3);
    //         }

    //         cout << count << endl;
    //         for (int i = 0; i < ind.size(); i++)
    //             cout << ind[i] << " ";
    //         cout << endl;
    //     }

    return 0;
}