#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<string, string> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (m[a] != "")
            m[b] = m[a];
        else
            m[b] = a;
        m.erase(a);
    }
    cout << m.size() << endl;
    for (auto i : m)
        cout << i.second << " " << i.first << endl;
    return 0;
}