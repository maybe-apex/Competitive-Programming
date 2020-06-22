#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool found = false;
        int n, a[5001];
        cin >> n;
        int start = 1, end = n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j >= 1; j--)
            {
                if (a[i] == a[j] && j - i >= 2)
                {
                    cout << "YES\n";
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        if (!found)
            cout << "NO\n";
    }

    return 0;
}