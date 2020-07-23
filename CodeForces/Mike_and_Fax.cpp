#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k, m;
    cin >> k;
    m = ((int)s.size()) / k;
    if (m * k != (int)s.size())
        return cout << "NO", 0;
    for (int i = 0; i < k; i++)
    {
        string t = s.substr(i * m, m);
        string l = t;
        reverse(l.begin(), l.end());
        if (l != t)
            return cout << "NO", 0;
    }
    cout << "YES";
    return 0;
}