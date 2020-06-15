#include <iostream>

using namespace std;

int main()
{
    int t, even = 0, odd = 0;
    bool possible = false;
    cin >> t;
    while (t--)
    {
        int n, a[10000];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
            {
                odd++;
                // cout << "adding " << a[i] << " to odd" << endl;
            }
            if (a[i] % 2 == 0)
            {
                even++;
                // cout << "adding " << a[i] << " to even" << endl;
            }
        }
        if (odd != 0)
        {
            if (n % 2 != 0)
                cout << "YES" << endl;
            if (n % 2 == 0 && even != 0)
                cout << "YES" << endl;
            if (n % 2 == 0 && even == 0)
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
        odd = 0;
        even = 0;
    }

    return 0;
}