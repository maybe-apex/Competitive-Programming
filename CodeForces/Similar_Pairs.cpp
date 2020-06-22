#include <iostream>
#include <algorithm>

using namespace std;

bool similar(int a, int b)
{
    if (abs(a - b) == 1 || (a & 1) == (b & 1))
        return true;
    return false;
}

int main()
{

    int t, n, a[100], pair = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] != -1 && similar(a[i], a[j]))
                {
                    // cout << i + 1 << " & " << j + 1 << endl;
                    a[j] = -1;
                    pair++;
                    break;
                }
            }
        }
        cout << (pair == n / 2 ? "YES\n" : "NO\n");
        pair = 0;
    }

    return 0;
}