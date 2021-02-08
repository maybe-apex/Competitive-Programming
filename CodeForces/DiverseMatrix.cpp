#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    if (r == 1 && c == 1)
        return cout << 0, 0;
    if (r > c)
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
                cout << j * (i + c) << " ";
            cout << endl;
        }
    if (r <= c)
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
                cout << i * (j + r) << " ";
            cout << endl;
        }

    return 0;
}