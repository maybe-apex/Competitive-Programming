#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    set<pair<int, int>> cells;
    int bad_nei = 0;
    while (q--)
    {
        int row, col;
        cin >> row >> col;
        bool was_forbidden = cells.count({row, col});
        for (int r = row; r <= row + 1; r++)
        {
            for (int c = col - 1; c <= col + 1; c++)
            {
                if (r == row)
                {
                    continue;
                }
                if (!(1 <= r && r <= 2 && 1 <= c && c <= n))
                {
                    continue;
                }
                if (cells.count({row, col}))
                {
                    if (cells.count({r, c}))
                    {
                        if (was_forbidden)
                        {
                            bad_nei--;
                        }
                        else
                        {
                            bad_nei++;
                        }
                    }
                }
            }
        }
        if (cells.count({row, col}))
        {
            cells.erase({row, col});
        }
        else
        {
            cells.insert({row, col});
        }
        cout << (bad_nei >= 1 ? "NO" : "YES");
    }

    return 0;
}