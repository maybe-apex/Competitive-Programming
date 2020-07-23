#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long m, s, num = 9;
    cin >> m >> s;
    if (s < 1 && m > 1 || s > m * 9)
        return cout << "-1 -1", 0;
    for (int i = m - 1, k = s; i >= 0; i--)
    {
        int j = max(0, k - 9 * i);
        if (j == 0 && i == m - 1 && k)
            j = 1;
        cout << j;
    }

    return 0;
}