#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[n];
        map<string, int> m;
        set<string> k;
        int count = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i], k.insert(a[i]);
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] >= 1)
            {
                count++;
                int j = 0;
                while (k.find(a[i]) != k.end())
                    a[i][3] = j + '0', j++;
            }
            m[a[i]]++;
            k.insert(a[i]);
        }
        cout << count << endl;
        for (int i = 0; i < n; i++)
            cout << a[i] << endl;
    }
    return 0;
}