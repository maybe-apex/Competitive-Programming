#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

vector<int> a;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, s, k;
        cin >> n >> s >> k;
        a.clear();
        a.resize(k);
        for (auto &z : a)
            cin >> z;
        for (int i = 0; i <= k; i++)
        {
            if (s - i >= 1 && find(a.begin(), a.end(), s - i) == a.end())
            {
                cout << i << endl;
                break;
            }
            if (s + i <= n && find(a.begin(), a.end(), s + i) == a.end())
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}