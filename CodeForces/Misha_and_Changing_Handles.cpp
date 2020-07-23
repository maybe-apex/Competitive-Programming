#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
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