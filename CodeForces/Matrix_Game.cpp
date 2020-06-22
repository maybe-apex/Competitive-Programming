#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        set<int> rt, ct;
        int r, c, m[55][55];
        cin >> r >> c;
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cin >> m[r][c];
                if (m[r][c])
                {
                    rt.insert(i);
                    ct.insert(j);
                }
            }
        }
        int rl = r - rt.size();
        int cl = c - ct.size();
        cout << (min(rl, cl) % 2 ? "Ashish\n" : "Vivek\n");
    }

    return 0;
}