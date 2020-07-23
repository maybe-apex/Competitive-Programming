#include <iostream>

using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for (double i = 1; i < n; i++)
    {
        for (double j = 1; j < m; j++)
        {
            if ((int)(i + j) % 5 == 0)
                ans++;
        }
    }
    cout << ans;

    return 0;
}