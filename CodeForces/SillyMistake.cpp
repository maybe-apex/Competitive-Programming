#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0, days = 1;
    cin >> n;
    int a[n];
    map<int, int> ent, ext;
    vector<int> pos;
    pos.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x > 0)
            ent[x]++;
        else
            x *= -1, ext[x]++;
        if (ent[x] > days || ext[x] > days || ext[x] > ent[x])
            return cout << -1, 0;
        if (!sum)
        {
            days++;
            map<int, int> ent, ext;
            pos.push_back(i + 1);
        }
    }
    if (sum != 0)
        return cout << -1, 0;
    cout << pos.size() - 1 << endl;
    for (int i = 0; i < pos.size() - 1; i++)
        cout << pos[i + 1] - pos[i] << " ";
    return 0;
}