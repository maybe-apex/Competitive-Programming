#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3] = {};
        string s;
        cin >> s;
        map<char, int> mp;
        mp['R'] = 0;
        mp['P'] = 1;
        mp['S'] = 2;
        for (int i = 0; i < s.size(); i++)
            a[mp[s[i]]]++;
        int x = 0, count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (a[i] > count)
                x = i, count = a[i];
        }
        switch (x)
        {
        case 0:
            for (int i = 0; i < s.size(); i++)
                cout << 'P';
            break;
        case 1:
            for (int i = 0; i < s.size(); i++)
                cout << 'S';
            break;
        case 2:
            for (int i = 0; i < s.size(); i++)
                cout << 'R';
            break;
        }
        cout << endl;
    }

    return 0;
}