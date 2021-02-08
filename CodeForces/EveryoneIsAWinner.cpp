#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        set<int> s;
        for (int i = 0; i <= sqrt(n); i++)
            s.insert(i);
        for (int i = 1; i <= sqrt(n); i++)
            s.insert(n / i);
        cout << s.size() << endl;
        for (auto &j : s)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}