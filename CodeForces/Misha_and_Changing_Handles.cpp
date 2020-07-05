#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    // map<string, string> mp, cur;
    // int n;
    // vector<string> v;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string x, y;
    //     cin >> x >> y;
    //     if (mp.find(x) == mp.end() && cur.find(x) == cur.end())
    //     {
    //         v.push_back(x);
    //         cur[x] = x;
    //     }
    //     mp[cur[x]] = y;
    //     cur[y] = cur[x];
    // }
    // cout << v.size() << endl;
    // for (auto it : v)
    //     cout << (it) << " " << mp[it] << endl;

    int n;
    map<string, string> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        if (m[s] != "")
            m[t] = m[s];
        else
            m[t] = s;
        m.erase(s);
    }
    cout << m.size() << endl;
    for (auto i : m)
        cout << i.second << " " << i.first << endl;

    return 0;
}