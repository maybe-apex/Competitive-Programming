#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[1002], i = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int x = 0;
    bool possible = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            x++;
            if (x > (n + 1) / 2)
            {
                possible = false;
                break;
            }
        }
        else
            x = 0;
        if (!possible)
            break;
    }
    cout << (possible ? "YES" : "NO");

    return 0;
}